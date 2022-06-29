def digits(n):
    count = 0
    if n == 0:
        return 1
    while n > 0:
        count += 1
        n = n // 10
    return count


print(digits(25))  # Should print 2
print(digits(144))  # Should print 3
print(digits(1000))  # Should print 4
print(digits(0))  # Should print 1
