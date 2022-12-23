# create a files from name with 'Practical-26' to 'Practical-52'

import os

for i in range(26, 53):
    with open('Practical-'+str(i)+'.c', 'w') as f:
        f.write('/*  */')
