# create a files called "Practical-01.cpp" and write "Hello World" in it

# open the file in write mode

# Create a list for practicals

txt = """/*  */

#include <iostream>
using namespace std;


"""

for i in range(1, 38):
    file = open("Practical-" + str(i) + ".cpp", "w")

    file.write(txt)

    # close the file
    file.close()