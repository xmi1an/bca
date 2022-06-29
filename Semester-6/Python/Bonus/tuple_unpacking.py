

# Tuple Unpacking or Multiple assignment
t1 = 5, 7, 9
x, y, z = t1
print(x, y, z, sep=' | ')  # sep use to separate values between |

x, y, _ = t1  # it means doesn't need the third value
print(x, y, sep=' | ')
