# 20.Write a Python program to using multiple inheritance.
"""
Multiple Inheritance 
When a class is derived from more than one base class it is called multiple Inheritance. The derived class inherits all the features of the base case.
https://www.geeksforgeeks.org/multiple-inheritance-in-python/
"""


class Class1:
    def msg1(self):
        print("In Class1")


class Class2(Class1):
    def msg2(self):
        print("In Class2")


class Class3(Class1):
    def msg3(self):
        print("In Class3")


class Class4(Class2, Class3):
    def msg(self):
        print("In Class4")


obj = Class4()
obj.msg1()
