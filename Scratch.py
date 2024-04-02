import os
import pandas as pd
from mysql.connector import errorcode, Error, connect

db_config = {
    'user': 'root',
    'password': 'nilashis',
    'host': 'localhost'
}

try:
    db_config['database'] = input("Enter database name: ")


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


    def upload_to_mysql(file_path, table_name, columns_to_upload):
        connection = create_connection()

        try:
            if file_path.endswith('.csv'):
                data = pd.read_csv(file_path, na_values=None, encoding='ISO-8859-1')
            elif file_path.endswith('.xlsx') or file_path.endswith('xls'):
                data = pd.read_excel(file_path, na_values=None)
            else:
                print(f"Error: File format {os.path.splitext(os.path.basename(file_path))[1]} not supported.")
                return

        except FileNotFoundError:
            print(f"Error: File {os.path.basename(file_path)} not found.")
            return

        data = data.where(pd.notna(data), None)

        if columns_to_upload == ['*']:
            columns_to_upload = data.columns.tolist()  # Get all column names

        def get_data_types(columns):
            data_types = {}
            for col in columns:
                try:
                    data_type = input(f"Enter data type for {col}: ")
                except KeyboardInterrupt:
                    print("\nInterrupted by user. Exiting...")
                    exit(0)
                data_types[col] = data_type
            return data_types

        def create_table(table_name, data):
            data_types = get_data_types(columns_to_upload)
            create_table_query = f"""
                                CREATE TABLE IF NOT EXISTS {table_name} (
                                    {', '.join([f'`{col}` {data_type}' for col, data_type in data_types.items()])}
                                )
                            """.replace('\n', '')
            return create_table_query

        def insert_data(cursor, table_name, data):
            insert_query = f"""
                INSERT INTO {table_name} ({', '.join([f'`{col}`' for col in data.columns])})
                VALUES ({', '.join(['%s' for _ in data.columns])})
            """
            for i, row in data.iterrows():
                cursor.execute(insert_query, tuple(row))

        if connection:
            try:
                cursor = connection.cursor()

                create_table_query = create_table(table_name, data)
                cursor.execute(create_table_query)

                insert_data(cursor, table_name, data)
                connection.commit()

                print(f"\nUploaded {len(data)} rows and {len(columns_to_upload)} columns into {table_name}.")

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
        table_name = input("Enter table name: ")
        file_path = input("Enter file path: ")
        columns_to_upload = input("Enter columns to upload (separated by comma): ").strip().split(',')
        upload_to_mysql(file_path, table_name, columns_to_upload)

    except KeyboardInterrupt:
        print("\nInterrupted by user. Exiting...")
        exit(0)
