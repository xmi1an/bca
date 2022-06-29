# Python Data Types

# - Numbers / Float
# - Strings
# - Lists
# - Tuples
# - Sets
# - Dictionaries
# - Boolean
# - Bytes

# print() - It is a built-in function that print or output the given data
# type() - It is a built-in function that shows the variable type

# Number assign without any quotes and braces
n = 10
print(type(n))
n1 = 20.5
print(type(n1))

# Single and double quotes used for string values
s = "I'm Peter Parker"
print(type(s))

# Square braces use for defining list object
# Lists are mutable (Reassign / Changeable)
l = ["Python", "Java", "JavaScript"]
print(type(l))
l2 = [10, 20, 30]
print(type(l2))

# Parentheses use for defining tuple object
# Tuples are immutable (Not changeable)
t = ("Python", "Java")
print(type(t))
t1 = (10, 20, 30)
print(type(t1))

# Use curly braces to defining a set
set1 = {"Python", "Java", "C"}
print(type(set1))
set2 = {10, 20, 30}
print(type(set2))

# Use curly braces to defining a dictionary
# It requries (Key : Value) pair
d = {"key": "Value", "language": "Python"}
print(type(d))

# Boolean values are True and False
v1 = True
v2 = False
print(type(v1))

# Bytes
b = b"This is Peter Parker"
print(type(b))
b1 = bytes(10)
print(type(b1))
