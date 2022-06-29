# 17. Write Python programs to implement a concept of list.
"""
A list in Python is used to store the sequence of various types of data. Python lists are mutable type its mean we can modify its element after it created. However, Python consists of six data-types that are capable to store the sequences, but the most common and reliable type is the list.

A list can be defined as a collection of values or items of different types. The items in the list are separated with the comma (,) and enclosed with the square brackets [].
https://www.javatpoint.com/python-lists 
"""
avengers = ["Ironman", "Spiderman", "Hulk", "Wanda", "Hawkeye", "Natasha"]

print(avengers)

# prints the object's type
print(type(avengers))

# prints 2nd element (Hulk)
print(avengers[2])

# Slicing the elements
print(avengers[1:4])

# update the values
avengers[2] = "Vision"
print(avengers)
