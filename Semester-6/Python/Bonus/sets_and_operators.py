

# Set & Set Operations
num_set = {2, 3, 4, 6}  # set() is known empty set
print(num_set)

# Adding items in set
num_set.add(1)
num_set.add(5)

# Remove item from set
num_set.remove(6)
print(num_set)
print('\n\n')

# Set Operations
set_a = {1, 2, 3, 4, 5}
set_b = {4, 5, 6, 7, 8}
print('Set A : ', set_a)
print('Set B : ', set_b)

# union set, print all value set a and b which value is two times they print once
print('Set A | Set B : ', set_a | set_b)
# intersection set, print value which is in both of set a and b
print('Set A & Set B : ', set_a & set_b)
# difference set, remove set b value from a then prints remaining values of a
print('Set A - Set B : ', set_a - set_b)
# symmetric difference, print set a and b items which does'nt matches
print('Set A ^ Set B : ', set_a ^ set_b)
