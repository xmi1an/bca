# 23. Write a Python program for connection with my Sql and display all record from the database.
"""
- We need "MySQL Connector" module to access MySQL databases.
- To install "MySQL Connector" Open cmd and type following :
python -m pip install mysql-connector-python
- Next Open xamp or wamp and start MySQL Server and create database.
- Create users Table and add dummy data.

-https://www.w3schools.com/python/python_mysql_getstarted.asp
"""
import mysql.connector

mydb = mysql.connector.connect(
    host='localhost', database='test', user='root', password='')

mycursor = mydb.cursor()

sql = "SELECT * FROM users"

mycursor.execute(sql)
myresult = mycursor.fetchall()

for x in myresult:
    print(x)

mydb.close()
