def normal_function(first, second):
    print("First argument is: ", first)
    print("Second argument is: ", second)


def fruits(*fruits_tuple):
    for fruit in fruits_tuple:
        print(fruit)
    print(type(fruits_tuple))


def vegetables(**vegetables_list):
    print(vegetables_list["good"], " is a good vegetable.")
    print(vegetables_list["bad"], " is a bad vegetable.")
    print(type(vegetables_list))


print()
normal_function("one", 2)
print()
fruits("Mango", "Banana", "Pineapple", "Apple")
print()
vegetables(good="Carrot", bad="Bitter gourd")
