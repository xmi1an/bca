

# List
list_a = [1, 2, 3, 4, 5]

# List inside Tuple
list_b = [(10, 11), (20, 21), (30, 31), (40, 41), (50, 51)]

new_list = []
for i in range(len(list_a)):
    list_together = []
    list_together += list_b[i]
    list_together.append(list_a[i])
    tup = tuple(list_together)
    new_list.append(tup)

print(new_list)
