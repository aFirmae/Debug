import os
import pandas as pd
from mysql.connector import errorcode, Error, connect

db_config = {
    'user': 'root',
    'password': 'nilashis',
    'host': 'localhost'
}

try:
    db_config['database'] = input("Enter your database name: ")

    def create_connection():
        try:
            connection = connect(**db_config)
            return connection

        except Error as err:
            if err.errno == errorcode.ER_ACCESS_DENIED_ERROR:
                print("Error: Access denied. Check your MySQL username and password.")
            elif err.errno == errorcode.ER_BAD_DB_ERROR:
                print(f"Error: Database {db_config['database']} does not exist.")
            else:
                print(f"Error: {err}")
            return None


    def upload_to_mysql(file_path, table_name):
        connection = create_connection()

        try:
            if file_path.endswith('.csv'):
                data = pd.read_csv(file_path, na_values=None, encoding='ISO-8859-1')
            elif file_path.endswith('.xlsx') or file_path.endswith('.xls'):
                data = pd.read_excel(file_path, na_values=None)
            else:
                print(f"Error: File format {os.path.splitext(os.path.basename(file_path))[1]} not supported.")
                return
        except FileNotFoundError:
            print(f"Error: File {os.path.basename(file_path)} not found.")
            return

        data = data.where(pd.notna(data), None)

        def get_data_types(columns):
            data_types = {}
            for col in columns:
                try:
                    data_type = input(f"Enter data type for {col}: ").strip()
                    data_types[col] = data_type
                except KeyboardInterrupt:
                    print("\nInterrupted by user. Exiting...")
                    exit(0)
            return data_types

        def create_table(table_name, data):
            data_types = get_data_types(data.columns)
            create_table_query = f"""
                                CREATE TABLE IF NOT EXISTS `{table_name}` (
                                    {', '.join([f'`{col}` {data_type}' for col, data_type in data_types.items()])}
                                )
                            """.replace('\n', '')
            return create_table_query

        def insert_data(table_name, data, cursor):
            insert_query = f"""
                INSERT INTO `{table_name}` ({', '.join([f'`{col}`' for col in data.columns])})
                VALUES ({', '.join(['%s' for _ in data.columns])})
            """

            text = ['NULL', 'null', 'Null', 'None', 'none', 'nan', 'NaN', 'NAN', 'nil', 'NIL', 'Nil', 'na', 'NA', 'Na']
            for index, row in data.iterrows():
                for col in data.columns:
                    if str(row[col]) in text:
                        data.at[index, col] = None
                row = row.where(pd.notnull(row), None)
                cursor.execute(insert_query, tuple(row))

        if connection:
            try:
                cursor = connection.cursor()

                create_table_query = create_table(table_name, data)
                cursor.execute(create_table_query)

                insert_data(table_name, data, cursor)
                connection.commit()

                print(f"\nUploaded {len(data)} rows and {len(data.columns)} columns into {table_name}.")

            except Exception as e:
                print(f"Error: {e}")

            finally:
                cursor.close()
                connection.close()

except KeyboardInterrupt:
    print("\nInterrupted by user. Exiting...")
    raise SystemExit

if __name__ == "__main__":
    try:
        file_path = input("Enter the file path: ").strip()
        table_name = input("Enter the table name: ")
        print()
        upload_to_mysql(file_path, table_name)
    except KeyboardInterrupt:
        print("\nInterrupted by user. Exiting...")
        exit(0)
