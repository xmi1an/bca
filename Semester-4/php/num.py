# create a files from name with 'Practical-26' to 'Practical-52'

num = 1

for i in range(1, 27):
    with open('Practical-'+str(i)+'.md', 'w') as f:
        f.write('''```php  
        
```''')
