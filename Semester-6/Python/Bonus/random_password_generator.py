import random
string = "abcdefghijklmnopqrstuvwxyz01234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*()?"
# input your pasword len
passlen = int(input())
password = "".join(random.sample(string, passlen))
print(password)
