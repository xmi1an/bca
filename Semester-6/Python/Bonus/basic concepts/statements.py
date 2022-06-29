# Python Statements

# - if-else statement
# Logical conditions used in statements
# - Equals: a == b
# - Not Equals: a != b
# - Less than: a < b
# - Less than or equal to: a <= b
# - Greater than: a > b
# - Greater than or equal to: a >= b

# if statement - it is a statement that uses logical condition, if conidition is True then the statement block will run otherwise not
a = 33
b = 55
if b > a:  # after colon sign next line will written with a tab to show that the next line is in statements block
    print("b is greater than a")

# raise an error the statement given below
"""
if b > a:
print("b is greater than a")
"""

# if-else statement - same as above but in this case 'if' condition False then run the code given in 'else' block
if b < a:
    print("b is less than a")
else:
    print("a is less than b")

# if-else if-else statement - it works same as if-else but after if block write statement 'else if' or 'elif' in short-form, if 'if' coniditon False then check the 'elif' condition if it is true then run 'elif' block and stop the program
if a == b:
    print("a is equal to b")
elif b > a:
    print("b is greater than a")
else:
    print("a is greater than b")
