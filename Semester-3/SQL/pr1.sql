create table salesman (
    snum int(4) unique,
    sname varchar(15),
    city varchar(10),
    commission int(3)
);

INSERT INTO
    salesman (snum, sname, city, commission)
VALUES
    (101, 'Smit', 'Idar', 10);