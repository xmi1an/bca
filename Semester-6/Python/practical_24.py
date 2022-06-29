# 24. Write a Python program for modified record, display record and delete record from the database.
"""
- We need "MySQL Connector" module to access MySQL databases.
- To install "MySQL Connector" Open cmd and type following :
python -m pip install mysql-connector-python
- Next Open xamp or wamp and start MySQL Servel and create "test" database.
- Create users Table and add dummy data.

-https://www.w3schools.com/python/python_mysql_getstarted.asp
"""

import mysql.connector

mydb = mysql.connector.connect(
    host='localhost',
    database='test',
    user='root',
    password=''
)

mycursor = mydb.cursor()

updatesql = "UPDATE users SET city = 'Baroda' WHERE city = 'Idar'"
deletesql = "DELETE * FROM users where city = 'idar'"

mycursor.execute(updatesql)

mydb.commit()

print(mycursor.rowcount, "record(s) affected")

mydb.close()
