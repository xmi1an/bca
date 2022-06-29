

# List Modification
mix_list = [1, 'Programmer', 5.0, True]
print(mix_list)

# Mutable : Because re-assign value
mix_list[0] = 2
print(mix_list)

# Adding item in list
mix_list.append('Python')
print(mix_list)

# Shortcut version of adding item
mix_list += ['Solo']
print(mix_list)

# Adding item at order place
mix_list.insert(1, 'I am')
print(mix_list)

# Delete a list item
del mix_list[0]
print(mix_list)
