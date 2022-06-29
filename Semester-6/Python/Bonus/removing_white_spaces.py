

# Whitespace
name = "     Peter Parker     "
print('_' + name + '_')

# removes left side spaces
print('_' + name.lstrip() + '_')

# removes right side spaces
print('_' + name.rstrip() + '_')

# removes all spaces from left and right both sides
print('_' + name.strip() + '_')

# also use lstrip and rstrip at same time instead of strip
print("\nlstrip() and rstrip() at same time")
print('_' + name.lstrip().rstrip() + '_')
