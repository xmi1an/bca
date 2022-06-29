

# 2D List of Matrix
'''
1 2 3 4 5
4 5 6 7 8
1 1 1 1 1
0 0 0 0 0
'''
# Nested List
matrix = [[1, 2, 3, 4, 5],
          [4, 5, 6, 7, 8],
          [1, 1, 1, 1, 1],
          [0, 0, 0, 0, 0]
          ]
for x in matrix:
    for y in x:
        # end skip the new line and print in one line with additional space
        print(y, end=' ')
    print()
