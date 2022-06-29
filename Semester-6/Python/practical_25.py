# 25. Write a Python program for search record from the database.
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
search = input("Search : ")

sql = "SELECT * FROM users WHERE name='%s' " % search

mycursor.execute(sql)

myresult = mycursor.fetchall()

for x in myresult:
    print(x)

mydb.close()
