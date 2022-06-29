# 19.Write a Python program to create nested list and display its elements.
"""
Nested List Comprehensions are nothing but a list comprehension within another list comprehension which is quite similar to nested for loops.
https://www.geeksforgeeks.org/nested-list-comprehensions-in-python/
"""

mynumbers = [
    [2, 3, 4],
    [5, 6, 7],
    [8, 9, 10]
]

for list in mynumbers:
    for number in list:
        print(number, end=' ')
