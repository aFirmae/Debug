import os
import pandas as pd
from mysql.connector import errorcode, Error, connect

db_config = {
    'user': 'root',
    'password': 'Souharda#Shikhar',
    'host': 'localhost',
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
            elif file_path.endswith('.xlsx') or file_path.endswith('xls'):
                data = pd.read_excel(file_path, na_values=None)
            else:
                print(f"Error: File format {os.path.splitext(os.path.basename(file_path))[1]} not supported.")                
                return
            
        except FileNotFoundError:
            print(f"Error: File {os.path.basename(file_path)} not found.")
            return
        
        data = data.where(pd.notna(data), None)

        if connection:
            try:
                cursor = connection.cursor()

                create_table_query = f"""
                    CREATE TABLE IF NOT EXISTS {table_name} (
                        {', '.join([f'`{col}` VARCHAR(255)' for col in data.columns])}
                    )
                """
                print(create_table_query)
                cursor.execute(create_table_query)
                
                insert_query = f"""
                    INSERT INTO {table_name} ({', '.join([f'`{col}`' for col in data.columns])})
                    VALUES ({', '.join(['%s' for _ in data.columns])})
                """

                for i, row in data.iterrows():
                    row = row.where(pd.notnull(row), None)
                    cursor.execute(insert_query, tuple(row))

                connection.commit()

                data_tuples = [tuple(row) for row in data.values]
            except Exception as e:
                print(f"Error: {e}")
                
            finally:
                cursor.close()
                connection.close()
                
except KeyboardInterrupt:
    print("\nThe process was interrupted by the user!")
    raise SystemExit  # Same as sys.exit()

if __name__ == "__main__":
    file_path = input("Enter the file path: ")
    table_name = input("Enter the table name: ")
    print("")

    upload_to_mysql(file_path, table_name)
