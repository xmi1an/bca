# 11. Write a python program to display ascending and descending order from given 10 numbers.
"""
- The sort() method sorts the list ascending by default.
- reverse Optional. reverse=True will sort the list descending. Default is reverse=False
https://www.w3schools.com/python/ref_list_sort.asp
"""

numbers = [1, 3, 4, 2, 7, 10, 8, 5, 9, 6]

# Sorting list of Integers in ascending.
numbers.sort()
print(numbers)

# Sorting list of Integers in descending.
numbers.sort(reverse=True)
print(numbers)
