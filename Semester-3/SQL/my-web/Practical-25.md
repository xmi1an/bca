---
sidebar_position: 25
---

#### 25 List all customers serviced by salesman with commission above 12 %.

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

![d](outputs\25.jpg)
