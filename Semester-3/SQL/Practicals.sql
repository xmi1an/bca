-- Create Salesman Table.
create table salesman (
    snum int(4) unique,
    sname varchar(15),
    city varchar(10),
    commission int(3)
);

-- Insert First Salesman.
INSERT INTO
    salesman (snum, sname, city, commission)
VALUES
    (101, 'Smit', 'Idar', 10);

-- Insert Second Salesman.
INSERT INTO
    salesman (snum, sname, city, commission)
VALUES
    (102, 'Milan', 'Idar', 15);

-- Create Customer Table with foreign key to salesman.
create table customer (
    cnum int(4) unique,
    cname varchar(15),
    city varchar(10),
    snum int(4) references salesman(snum)
);

-- First Customer.
INSERT INTO
    customer (cnum, cname, city, snum)
VALUES
    (1, 'John', 'Idar', 1);

-- Second Customer.
INSERT INTO
    customer (cnum, cname, city, snum)
VALUES
    (2, 'Mary', 'Idar', 1);

-- create a table for orders.
create table orders (
    onum int(4) primary key,
    cnum int(4) references customer(cnum),
    snum int(4) references salesman(snum),
    quantity int(4),
    orderdate date,
    price int(4)
);

-- First Order.
INSERT INTO
    orders (onum, cnum, snum, quantity, orderdate, price)
VALUES
    (1, 1, 1, 10, '2015-01-01', 100);

-- Second Order.
INSERT INTO
    orders (onum, cnum, snum, quantity, orderdate, price)
VALUES
    (2, 1, 2, 20, '2015-01-02', 200);

-- Show salesman table.
select
    *
from
    salesman;

-- Show customer table.
select
    *
from
    customer;

-- Show orders table.
select
    *
from
    orders;

-- Show orders for customer 1.
select
    *
from
    orders
where
    cnum = 1;

-- show order from snum where snum = 1; 
select
    *
from
    orders
where
    snum = 1;

5.
select
    unique a.snum
from
    salesman a,
    order1 b
where
    a.snum = b.snum
order by
    a.snum;

6.
select
    *
from
    order1
where
    amount > 1000;

7.
select
    sname,
    city
from
    salesman
where
    city = 'london'
    and commission > 10;

8.
select
    *
from
    customer
where
    rating > 100
    or city not in('rome');

9.
select
    *
from
    order1
where
    amount > 1000
    and snum <> 1006
    and odate not in('10-mar-97');

10.
select
    *
from
    order1
where
    odate in('03-oct-97', '04-oct-97', '06-oct-97');

11.
select
    *
from
    customer
where
    cname like 'c%';

12.
select
    *
from
    customer
where
    cname between ('a%')
    and ('h%');

13.
select
    *
from
    order1
where
    amount = 0
    or amount = NULL;

14.
select
    snum,
    max(amount)
from
    order1
where
    snum = 1002
    or snum = 1007
group by
    snum;

15.
select
    count(*)
from
    order1
where
    odate = '10-mar-97';

16.
select
    sum(amount)
from
    order1;

17.
select
    avg(amount)
from
    order1;

18.
select
    count(unique snum)
from
    order1
where
    odate = sysdate;

19.
select
    snum,
    max(amount),
    odate
from
    order1
group by
    odate,
    snum;

20.
select
    snum,
    max(amount)
from
    order1
where
    odate = '10-mar-97'
group by
    snum;

21.
select
    count(unique city)
from
    customer
where
    city is not NULL;

22.
select
    cnum,
    min(amount)
from
    order1
group by
    cnum;

23.
select
    cname
from
    customer
where
    cname like 'g%'
order by
    cname;

24.
select
    odate,
    count(unique snum)
from
    order1
group by
    odate;

25.
select
    sname NAME,
    commission COMM
from
    salesman;

26.
select
    onum,
    odate
from
    order1;

27.
select
    onum,
    a.snum,
    a.commission
from
    order1,
    salesman a
where
    a.commission = 12
    and order1.snum = a.snum;

28.
select
    max(rating),
    city
from
    customer
group by
    city;

29.
select
    *
from
    customer
order by
    rating desc;

30.
select
    odate,
    sum(amount)
from
    order1
group by
    odate;

31.
select
    a.cname,
    b.sname
from
    customer a,
    salesman b
where
    a.snum = b.snum;

32.
select
    b.cname,
    a.sname,
    a.city
from
    salesman a,
    customer b
where
    a.city = b.city
    and a.snum = b.snum;

33.
select
    a.onum,
    b.sname,
    c.cname
from
    order1 a,
    salesman b,
    customer c
where
    a.snum = b.snum
    and a.cnum = c.cnum;

34.
select
    onum,
    b.cname C_name,
    b.city C_CITY,
    a.sname S_name,
    a.city S_CITY
from
    salesman a,
    customer b,
    order1
where
    a.city <> b.city
    and a.snum = b.snum
    and a.snum = order1.snum;

35.
select
    *
from
    customer a,
    salesman b
where
    a.snum = b.snum
    and b.commission > 12;

36.
select
    o.onum,
    o.amount,
    c.cnum,
    s.snum,
    s.commission * o.amount / 100
from
    salesman s,
    customer c,
    order1 o
where
    o.cnum = c.cnum
    and c.rating > 100
    and c.snum = s.snum;

37.
select
    a.cname,
    b.cname
from
    customer a,
    customer b
WHERE
    a.rating = b.rating
    and a.cnum > b.cnum;

38.
select
    c.cname,
    c.city
from
    customer c
where
    c.snum = (
        select
            snum
        from
            salesman
        where
            sname like 'niraj'
    )
    or c.city = (
        select
            city
        from
            salesman
        where
            sname like 'niraj'
    );

39.
select
    a.cname,
    b.cname,
    s.sname,
    s.snum
from
    customer a,
    customer b,
    salesman s
where
    a.snum = b.snum
    and a.cnum > b.cnum
    and s.snum = a.snum;

40.
select
    a.sname,
    b.sname
from
    salesman a,
    salesman b
where
    a.city = b.city
    and a.snum > b.snum;

41.
select
    a.cname,
    a.city
from
    customer a
where
    a.rating = (
        select
            rating
        from
            customer
        where
            cname = 'hardik'
    );

42.
select
    *
from
    order1
where
    snum = (
        select
            snum
        from
            salesman
        where
            sname = 'miti'
    );

43.
select
    *
from
    order1
where
    snum = (
        select
            snum
        from
            salesman
        where
            city = 'baroda'
    );

44.
select
    *
from
    order1
where
    snum = (
        select
            snum
        from
            customer
        where
            cname = 'hardik'
    );

45.
select
    *
from
    order1
where
    amount > (
        select
            avg(amount)
        from
            order1
        where
            odate = '10-apr-99'
        group by
            odate
    );

46.
select
    o.onum,
    o.amount,
    o.odate,
    o.snum
from
    order1 o,
    salesman s
where
    o.snum = s.snum
    and s.city = 'london';

47.
select
    s.snum,
    c.cnum,
    c.city,
    s.commission * o.amount / 100
from
    salesman s,
    order1 o,
    customer c
where
    o.snum = s.snum
    and o.cnum = c.cnum
    and c.city = 'london';

48.
select
    c.cnum,
    c.cname,
    c.city
from
    customer c,
    salesman s
where
    c.snum = s.snum
    and c.cnum > (
        select
            snum + 1000
        from
            salesman
        where
            sname = 'niraj'
    );

49.
select
    *
from
    customer
where
    rating > (
        select
            avg(rating)
        from
            customer
        where
            city = 'surat'
    );

50.
select
    o.onum,
    o.amount,
    o.odate,
    o.cnum
from
    order1 o,
    customer c
where
    o.cnum = c.cnum
    and c.cname = 'chandresh';

51.
select
    c.cname,
    c.rating
from
    customer c,
    order1 o
where
    c.cnum = o.cnum
    and o.amount >(
        select
            avg(amount)
        from
            order1
    );

52.
select
    c.cnum,
    c.cname,
    c.rating
from
    customer c,
    order1 o
where
    c.cnum = o.cnum
    and o.odate = '03-oct-97';

53.
select
    unique s.snum,
    s.sname,
    s.city
from
    salesman s,
    customer c
where
    s.snum = c.snum;

54.
select
    odate,
    sum(amount)
from
    order1
where
    amount > 2000
    and amount <(
        select
            max(amount)
        from
            order1
    )
group by
    odate;

55.
select
    distinct cname,
    cnum,
    rating
from
    customer c
where
    rating =(
        select
            max(rating)
        from
            customer
        where
            c.city = city
    );

56.
select
    s.sname,
    s.snum
from
    salesman s,
    customer c
where
    s.snum = c.snum
    and s.city = c.city;

57.
select
    s.snum,
    s.sname,
    s.city,
    s.commission
from
    salesman s,
    customer c
where
    s.snum = c.snum
    and c.rating > 300;

58.
select
    unique s.snum,
    s.sname,
    s.city,
    s.commission
from
    salesman s,
    customer c
where
    s.city = c.city;

59.
select
    distinct s.snum,
    s.sname,
    s.city
from
    salesman s,
    customer c
where
    s.snum = c.snum
    and s.sname < c.cname;

60.
select
    c.cnum,
    c.cname,
    c.city,
    c.rating
from
    customer c
where
    c.rating > (
        select
            max(rating)
        from
            customer
        where
            city = 'rome'
        group by
            city
    );

61.
select
    onum,
    amount,
    odate
from
    order1
where
    odate not in '10-mar-99'
    and (
        amount > (
            select
                max(amount)
            from
                order1
            where
                odate = '10-mar-99'
        )
        or amount > (
            select
                min(amount)
            from
                order1
            where
                odate = '10-mar-99'
        )
    );

62.
select
    onum,
    amount
from
    order1
where
    cnum not in(
        select
            cnum
        from
            customer
        where
            city = 'rome'
    )
    and (
        amount < (
            select
                max(o.amount)
            from
                order1 o,
                customer c
            where
                o.cnum = c.cnum
                and c.city = 'rome'
        )
        or amount < (
            select
                min(o.amount)
            from
                order1 o,
                customer c
            where
                o.cnum = c.cnum
                and c.city = 'rome'
        )
    );

63.
select
    cnum,
    cname,
    rating,
    city
from
    customer
where
    city not in 'rome'
    and (
        rating > (
            select
                max(rating)
            from
                customer
            where
                city = 'rome'
        )
        or rating > (
            select
                min(rating)
            from
                customer
            where
                city = 'rome'
        )
    );

64.
select
    cnum,
    cname,
    city,
    rating
from
    customer
where
    city not in 'surat'
    and rating not in (
        select
            rating
        from
            customer
        where
            city = 'surat'
    );

65.
select
    cnum,
    cname,
    city,
    rating
from
    customer
where
    rating >= any (
        select
            rating
        from
            customer c
        where
            c.snum =(
                select
                    snum
                from
                    salesman
                where
                    sname = 'niraj'
            )
    );

66.67.
select
    cname || '-- ' || 'high' "cname with h/l"
from
    customer
where
    rating >= 200
union
select
    cname || '-- ' || 'low'
from
    customer
where
    rating < 200;

68.
insert into
    salesman
values
    (& snum, '&sname', '&city', & commission);

69.
insert into
    customer
values
    (2005, 'pratik', 'london', '', 100);

insert into
    customer
values
    * ERROR at line 1: ORA -00001: unique constraint (JITS.SYS_C00376) violated 70.create table staff as
select
    *
from
    salesman
where
    city = 'london';

71.72.create table day_total as
select
    odate,
    sum(amount) "total"
from
    order1
group by
    odate;

73.create table multicust as
select
    *
from
    salesman;

74.
insert into
    salesman
values
    75.
delete from
    order1
where
    cnum =(
        select
            cnum
        from
            customer
        where
            cname = 'chandresh'
    );

76.
update
    customer
set
    rating = 400
where
    cname = 'piyush';

77.
update
    customer
set
    rating = rating + 100
where
    city = 'rome';

78.
update
    salesman
set
    sname = 'gopal',
    city = 'bombay',
    commission = 10
where
    sname = 'miti';

79.
update
    salesman
set
    commission = commission * 2
where
    city = 'london';

80.
update
    customer
set
    rating = NULL
where
    city = 'london';

81.82.create table smcity as
select
    s.snum,
    s.sname,
    s.city
from
    salesman s,
    customer c
where
    c.snum = s.snum
    and s.city = c.city;

83.create table bonus as
select
    onum,
    o.odate,
    max(o.amount) "amount"
from
    order1 o
group by
    odate,
    onum;

84.