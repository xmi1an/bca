# 14. Write Python programs to using lambda function.
"""
Python Lambda function is known as the anonymous function that is defined without a name. Python allows us to not declare the function in the standard manner, i.e., by using the def keyword. Rather, the anonymous functions are declared by using the lambda keyword. However, Lambda functions can accept any number of arguments, but they can return only one value in the form of expression.
https://www.javatpoint.com/python-lambda-functions
"""

# a is an argument and a+10 is an expression which got evaluated and returned.    
x = lambda a:a+10   

# Here we are printing the function object  
print(x)  
print("sum = ",x(20))  
