

dict = {'a': 1, 'b': 2, 'c': 3, 'd': 4}
print("Keys and its Values")
for key, value in dict.items():
    # .items() prints both keys and values
    print(key, value, sep='->')


# print only keys nor values
print("\nKeys of Dictionary")
for key in dict:
    print(key)

# print only values
print("\nValues of Dictionary")
for value in dict.values():
    print(value)
