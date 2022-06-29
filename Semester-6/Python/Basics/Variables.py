gv = "I am global variable"


def myfunc():
    lv = "I am Local variable"
    print(lv)
    print(gv)


myfunc()

print(gv)
print(lv)  # Get an error 'lv' is not defined
