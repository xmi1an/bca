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

--  7. create orders table.
create table orders (
    onum int(4) primary key,
    amount int(6),
    odate date,
    cnum int(4) references customer(cnum),
    snum int(4) references salesman(snum)
);

-- 8. Insert data into orders table.
INSERT INTO
    orders (onum, ammount, odate, cnum, snum)
VALUES
    (3001, 18.69, '10/03/99', 2006, 1007);

-- Practicals
-- 1. Produce the orders no, amount and date of all orderss.
SELECT
    onum,
    ammount,
    odate
FROM
    orders;

-- 2. Give all the information about all the customers with salesman number 1001.
SELECT
    *
FROM
    customer
WHERE
    snum = 1001;

-- 3. Display the information in the sequence of city, sname, snum, and Commission.
SELECT
    city,
    sname,
    snum,
    commission
FROM
    salesman;

-- 4. List of snum of all salesmen with orders in orders table without duplicates.
select
    DISTINCT snum
from
    orders;

-- 5. List of all orders for more than Rs.1000.
SELECT
    *
FROM
    orders
WHERE
    ammount > 1000;

-- 6. List out names and cities of all salesmen in London with commission above 10%.
SELECT
    sname,
    city
FROM
    salesman
WHERE
    city = 'London'
    AND commission > 10;

-- 7. List all customers excluding those with rating <= 100 or they are located in Rome.
SELECT
    *
FROM
    customer
WHERE
    NOT (
        rating <= 100
        OR city = 'Rome'
    );

-- 8. List all orders for more than Rs.1000 except the orders of snum, 1006 of 10/03/99.
SELECT
    *
FROM
    orders
WHERE
    ammount > 1000
    AND NOT (
        odate = '10/03/99'
        AND snum = 1006
    );

-- 9. List all orders taken on 10th March, April and June 1999.
SELECT
    *
FROM
    orders
WHERE
    odate IN (
        '10/03/1999',
        '10/04/1999',
        '10/06/1999'
    );

-- 10. List all customers whose names begin with a letter 'C'.
SELECT
    *
FROM
    customer
WHERE
    cname LIKE 'C%';

-- 11. List all customers whose names begins with letter 'A' to 'G'.
select
    *
from
    customer
where
    cname between ('a%')
    and ('h%');

-- OR
SELECT
    *
FROM
    customer
WHERE
    cname LIKE 'A%'
    OR cname LIKE 'B%'
    OR cname LIKE 'C%'
    OR cname LIKE 'D%'
    OR cname LIKE 'E%'
    OR cname LIKE 'F%'
    OR cname LIKE 'G%';

-- 12.List all orderss with zero or NULL amount.
SELECT
    *
FROM
    orders
WHERE
    ammount = 0
    OR ammount IS NULL;

-- 13. Find out the largest order of salesman 1002 and 1007.
SELECT
    *
FROM
    orders
WHERE
    snum = 1002
    OR snum = 1007
order BY
    ammount DESC
LIMIT
    1;

-- 14. Calculate the Average and Sum of amount ordersed.
SELECT
    AVG(ammount),
    SUM(ammount)
FROM
    orders;

-- 15. Count the no. of salesmen currently having orders.
SELECT
    COUNT(snum),
    snum
FROM
    orders
GROUP by
    snum;

-- 16. Find the largest orders taken by each salesman on each date.
select
    snum,
    odate,
    max(ammount)
from
    orders
group by
    snum;

-- 17. Find out each customer's smallest orders.
SELECT
    cnum,
    MIN(ammount)
FROM
    orders
GROUP BY
    cnum;

-- 18. Find out the customer in alphabetical orders whose name begins with 'G'.
SELECT
    cname
FROM
    customer
WHERE
    cname LIKE 'G%' orders BY cname;

-- Display the no.of orders for each day in the following format.There are "X"(No.of orderss) orderss on "Y"(Date in dd - mon - yy).
SELECT
    COUNT(*) AS NoOforderss,
    DATE_FORMAT(odate, '%d - %b - %Y') AS Date
FROM
    orders
GROUP BY
    DATE_FORMAT(odate, '%d - %b - %Y');

-- Assume each salesperson has a 12 % commission.Write a query on the orders table that will Produce the orders number, salesman no and amount of commission for that orders.
SELECT
    onum,
    snum,
    ammount * 0.12
FROM
    orders;

-- List all customers in descending orders of rating.
SELECT
    *
FROM
    customer orders BY rating DESC;

-- Show the name of all customers with their salesman 's name.
SELECT
    cname,
    sname
FROM
    customer
    JOIN salesman ON customer.snum = salesman.snum;

-- List all orderss with the names of their customer and salesman.
SELECT
    orders.onum,
    orders.ammount,
    orders.odate,
    customer.cname,
    salesman.sname
FROM
    orders
    JOIN customer ON orders.cnum = customer.cnum
    JOIN salesman ON orders.snum = salesman.snum;

-- List all orderss by the customers not located in the same city as their salesman.
SELECT
    orders.onum,
    orders.ammount,
    orders.odate,
    customer.cname,
    salesman.sname
FROM
    orders
    JOIN customer ON orders.cnum = customer.cnum
    JOIN salesman ON orders.snum = salesman.snum
WHERE
    customer.city != salesman.city;

-- List all customers serviced by salesman with commission above 12 %.
SELECT
    customer.cname,
    salesman.sname
FROM
    customer
    JOIN salesman ON customer.snum = salesman.snum
WHERE
    salesman.commission > 12;

-- Find all pairs of customers having the same rating without duplication.
SELECT
    customer.cname,
    customer.rating,
    salesman.sname
FROM
    customer
    JOIN salesman ON customer.snum = salesman.snum
WHERE
    customer.rating = salesman.rating;

-- List all customers located in cities where salesman Niraj has customers.
SELECT
    customer.cname,
    customer.city
FROM
    customer
    JOIN salesman ON customer
    JOIN salesman ON customer.snum = salesman.snum
WHERE
    salesman.sname = 'Niraj'
    AND customer.city = salesman.city;

-- List all salesmen who are living in the same city without duplicate rows.
SELECT
    salesman.sname,
    salesman.city
FROM
    salesman
    JOIN salesman ON salesman
    JOIN salesman ON salesman.snum = salesman.snum
WHERE
    salesman.city = salesman.city;

-- Produce the name and city of all the customers with the same rating as Hardik '.
SELECT
    customer.cname,
    customer.city
FROM
    customer
    JOIN salesman ON customer
    JOIN salesman ON customer.snum = salesman.snum
WHERE
    customer.rating = 'Hardik'
    AND customer.city = salesman.city;

-- Extract all orderss of Miti.
SELECT
    orders.onum,
    orders.ammount,
    orders.odate,
    customer.cname,
    salesman.sname
FROM
    orders
    JOIN customer ON orders.cnum = customer.cnum
    JOIN salesman ON orders.snum = salesman.snum
WHERE
    customer.cname = 'Miti';