# 22.Write a Python program for Error Handling.
"""
- The try block lets you test a block of code for errors.
- The except block lets you handle the error.
- The finally block lets you execute code, regardless of the result of the try- and except blocks.
https://www.w3schools.com/python/python_try_except.asp
"""
try:
    a = int(input("Enter First Number: "))
    b = int(input("Enter Second Number: "))
    c = a / b
    print("Division is : ", c)
except:
    print("Can't divide with zero")
finally:
    print("Rest of the code..")
