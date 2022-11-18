#include <stdio.h>

int main()
{

    // variable to store the marks of the student
    int marks;

    // take input from the user
    scanf("%d", &marks);

    // if else condition to check whether the student is pass
    if (marks >= 35)
    {

        // nested if else condition to determine the grade of the student
        if (marks >= 90)
        {
            // A grade
            printf("A");
        }
        else if (marks >= 80)
        {
            // B grade
            printf("B");
        }
        else if (marks >= 70)
        {
            // C grade
            printf("C");
        }
        else if (marks >= 60)
        {
            // D grade
            printf("D");
        }
        else
        {
            // E grade
            printf("E");
        }
    }
    else
    {
        // the student didn't pass
        printf("F");
    }
}
