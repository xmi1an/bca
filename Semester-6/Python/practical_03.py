# 3. Write a Python program to display the Fibonacci series

# Define a Functions
def fibonacci(n):
    first_num = 0
    second_num = 1
    print(first_num)
    print(second_num)
    for i in range(2, n):
        next = first_num + second_num
        first_num = second_num
        print(next)
        second_num = next


# Calling fib function
fibonacci(10)
