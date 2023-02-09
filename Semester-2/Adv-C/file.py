txt = """/*  */
"""

for i in range(2, 36):
    file = open("Practical-" + str(i) + ".c", "w")

    file.write(txt)

    # close the file
    file.close()
