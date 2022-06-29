import mysql.connector as c

conn = c.connect(host='localhost', user='root', passwd='', db='test')

if conn.is_connected():
    print("Connected")

crsr = conn.cursor()

sql = "insert into users (name, city, country) values('Vision', 'Idar', 'India'),('Naruto', 'Hidden Leaf Village', 'Konoha')"
crsr.execute(sql)
conn.commit()
print(crsr.rowcount, "record inserted.")
