---
sidebar_position: 23
---

#### 23 List all orders with the names of their customer and salesman.

```sql
SELECT
    onum,
    cname,
    sname
FROM
    orders
    INNER JOIN customer ON orders.cnum = customer.cnum
    INNER JOIN salesman ON orders.snum = salesman.snum;
```

#### Output:

![d](outputs\23.jpg)
