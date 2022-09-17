---
sidebar_position: 24
---

#### 24. List all orders by the customers not located in the same city as their salesman.

```sql
SELECT
    onum,
    cname,
    sname
FROM
    orders
    INNER JOIN customer ON orders.cnum = customer.cnum
    INNER JOIN salesman ON orders.snum = salesman.snum
WHERE
    customer.city != salesman.city;
```

#### Output:

![d](outputs\24.jpg)
