-- Create a Database with your name.
CREATE DATABASE YourNameDB;

-- Use the database
USE YourName;

-- 3. create salesman table.
create table salesman (
    snum int(4) unique,
    sname varchar(15),
    city varchar(10),
    commission int(3)
);

-- 4. Insert data into the salesman table.
INSERT INTO
    salesman (snum, sname, city, commission)
VALUES
    (1001, 'Piyush', 'London', 12);

INSERT INTO
    salesman (snum, sname, city, commission)
VALUES
    (1002, 'Niraj', 'Surat', 13);

-- 5. Create customer table.
create table customer (
    cnum int(4) unique,
    cname varchar(15),
    city varchar(10),
    rating int(3),
    snum int(4) references salesman(snum)
);

-- 6. Insert data into customer table.
INSERT INTO
    customer (cnum, cname, city, rating, snum)
VALUES
    (2001, 'Hardik', 'London', 100, 1001);

--  7. create order table.
create table order (
    onum int(4) unique,
    ammount float(3),
    odate date,
    cnum int(4),
    snum int(4)
);

-- 8. Insert data into order table.
INSERT INTO
    order (onum, ammount, odate, cnum, snum)
VALUES
    (3001, 18.89, '10/03/2021', 2001, 1001);

--