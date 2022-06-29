

# Value vs Reference type Functions

# Value Type
print('*Value Type*')
num = 100


def change_num(n):
    n += 100
    print('Inner num : ', n)


change_num(num)
print('Outer num : ', num)

# Reference Type
# List, Dictionary
print('\n*Reference Type*')
list_num = [1, 2, 3, 4, 5]
dict_num = {'one': 1, 'two': 2, 'three': 3}


def change(list, dict):
    del list[0]
    list[-1] = 55

    del dict['one']
    dict['three'] = 33
    print('Applying Function')
    print('Inner List : ', list)
    print('Inner Dictionary : ', dict)


print('Before')
print('Outer List : ', list_num)
print('Outer Dictionary : ', dict_num)
change(list=list_num, dict=dict_num)
print('After Call')
print('Outer List : ', list_num)
print('Outer Dictionary : ', dict_num)
