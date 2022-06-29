# 6. Write a Python Program to Check Armstrong Number.

n = int(input("Enter a number: "))
# initialize the sum
summ = 0
temp = n

while temp > 0:
    rem = temp % 10
    cube = rem ** 3
    summ += cube
    temp //= 10

# Display the result
if n == summ:
    print(n, "is an Armstrong number")
else:
    print(n, "is not an Armstrong number")
