# 10. Write a Python program to check the given number is palindrome or not.

n = int(input("Enter number:"))
temp = n
rev = 0

while(n > 0):
    rem = n % 10
    rev = (rev * 10) + rem
    n = n // 10

if(temp == rev):
    print(temp, "number is a palindrome!")
else:
    print(temp, "number isn't a palindrome!")
