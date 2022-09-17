---
sidebar_position: 27
---

#### 27. List all customers located in cities where salesman Niraj has customers.

```sql
SELECT
    cname
FROM
    customer
WHERE
    cname LIKE 'G%'
ORDER BY
    cname;
```

#### Output:

![d](outputs\27.jpg)
