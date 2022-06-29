import mysql.connector as c

conn = c.connect(host='localhost', user='root', passwd='', db='test')

if conn.is_connected():
    print("Connected")
