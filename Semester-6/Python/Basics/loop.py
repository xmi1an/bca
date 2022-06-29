# While Loop
i = 1
while i < 6:
    print(i)
    i += 1

# Do While
i = 1

while True:
    print(i)
    i = i + 1
    if(i > 5):
        break

# Nested Loop
rows = 5
# outer loop
for i in range(1, rows + 1):
    # inner loop
    for j in range(1, i + 1):
        print("*", end=" ")
    print('')
