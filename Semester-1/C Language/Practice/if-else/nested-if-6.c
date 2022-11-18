#include <stdio.h>

int main()
{

    int marks;

    scanf("%d", &marks);

    if (marks >= 35)
    {
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

    return 0;
}
