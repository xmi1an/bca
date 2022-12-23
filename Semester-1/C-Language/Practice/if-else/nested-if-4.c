#include <stdio.h>

void main()
{
    int n1 = 40;
    int n2 = 40;

    if (n1 >= n2)
    {
        if (n1 == n2)
        {
            printf("Both numbers are equal.");
        }
        else
        {
            printf("n1 is greater than n2.");
        }
    }
    else
    {
        printf("n2 is greater than n1.");
    }
}