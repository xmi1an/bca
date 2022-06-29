

# Get and remove item using pop()
languages = ['Python', 'Java Script', 'C']
last = languages.pop()  # remove c from the list
print(languages, "\nLast is ", last)

second = languages.pop(1)  # remove java script from the list
print(languages, "\nSecond is", second)

first = languages.pop(0)  # remove python from the list
print(languages, "\nFirst is", first)

numbers = [1, 5, 2, 4, 3, 4, 5]
print(numbers)
numbers.remove(5)  # remove first founded 5 from numbers
print(numbers)
numbers.remove(4)  # remove 4 which is between 2 and 3
print(numbers)
