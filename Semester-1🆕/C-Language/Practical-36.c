/* 36. Write a C program to read marks and your program will display grade.

    Marks Grade
    100– 80 Dist
    60– 79 First
    50– 59 Second
    35– 49 Pass
    0– 34 Fail
    */

#include <stdio.h>
#include <conio.h>
void main()
{
    int marks;
    // clrscr();

    printf("Enter Marks:");
    scanf("%d", &marks);

    if (marks >= 80 && marks <= 100)
    {
        printf("Distiction");
    }
    else if (marks >= 60 && marks <= 79)
    {
        printf("First Class");
    }
    else if (marks >= 50 && marks <= 59)
    {
        printf("Second Class");
    }
    else if (marks >= 35 && marks <= 49)
    {
        printf("Pass Class");
    }
    else if (marks <= 34 && marks >= 0)
    {
        printf("Fail");
    }
    else
    {
        printf("Marks Should be Under 100..");
    }
}