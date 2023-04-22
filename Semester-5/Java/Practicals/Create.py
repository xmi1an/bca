# create a files called "Practical-01.cpp" and write "Hello World" in it

# open the file in write mode

# Create a list for practicals


practicals = [
    "1. Write a Java Program find the area of circle.",
    "2. Write a Java Program that will display factorial of the given number.",
    "3. Write a Java Program that will find the largest no from the given two nos.",
    "4. Write a Java Program that will find the largest no from the given three nos.",
    "5. Write a Java Program that shows the use of switch Statement.",
    "6. Write a Java Program to find the sum of the digits of given number.",
    "7. Write a Java Program that will display the Sum of 1+1/2+1/3…..+1/n.",
    "8. Write a Java Program that check weather the given no is prime or not.",
    "9. Write a Java Program that implements the use of break statement.",
    "10. Write a Java Program that implements the use of continue statement.",
    "11. Write a Java Program that will accept Command-line Arguments and display the same.",
    "12. Write a Java Program to sort the elements of an array in Ascending Order.",
    "13. Write a Java Program to create a Student class and generate result of student (Total, Per,",
    "Grade).",
    "14. Write a Java Program to create an Employee class and generate Salary Slip for the employee.",
    "15. Write a java program which shows the use of Static Members.",
    "16. Write a java program which shows the Nesting of Methods.",
    "17. Write a java program which shows the use of Methods Overloading.",
    "18. Write a java program which implements the Default Constructors.",
    "19. Write a java program which implements the Parameterized Constructors.",
    "20. Write a java program which implements the Overloading of Constructors.",
    "21. Write a java program which explains the concept of Single Inheritance.",
    "22. Write a java program which explains the concept of Multilevel Inheritance.",
    "23. Write a java program which explains the concept of Hierarchical Inheritance.",
    "24. Write a java program which shows the Method Overriding.",
    "25. Write a Java Program to implement final class and final method.",
    "26. Write a Java Program to implement abstract class and abstract method.",
    "27. Write a java program which implements Interface.",
    "28. Write a java program which implements Multiple Interfaces.",
    "29. Write a java program which shows importing of classes from other packages.",
    "30. Write a Java Program to implement the methods of Math Class.",
    "31. Write a Java Program to implement the methods of String Class.",
    "32. Write a Java Program to implement the methods of Vector Class.",
    "33. Write a Java Program to implement the methods of Stack Class.",
    "34. Write a Java Program which will read a text and count all occurrences of a particular word.",
    "35. Write a Java Program which will read a string and rewrite it in the alphabetical order eg.The",
    "word “STRING” should be written a “GINRST”.",
    "36. Write a java program which creates threads using the Thread Class.",
    "37. Write a java program which shows the use of yield(), stop() and sleep() Methods.",
    "38. Write a java program which shows the Priority in Threads.",
    "39. Write a java program which use of Runnable Interface.",
    "40. Write a java program which uses try and catch for Exception Handling.",
    "41. Write a java program which uses Multiple catch Blocks.",
    "42. Write a java program which uses finally Statement.",
    "43. Write a java program which uses Nested try Statements.",
    "44. Write a java program which shows throwing our own Exception.",
    "45. Create an Applet program that print Hello Applet.",
    "46. Create an applet that use init(),start(),stop() and destroy() methods of applet.",
    "47. write an applet program to implement the concept of passing parameter to applet.",
    "48. Write a applet program to implement various methods of Graphics class.",
]


# Write the practicals in each file

for i in range(1, 49):
    file = open("Practical-" + str(i) + ".java", "w")

    file.write("/* " + practicals[i - 1] + " */\n\n")

    file.close()
