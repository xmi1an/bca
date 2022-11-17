/*
14. Write a C program to find that the enter number is Negative, or Positive or Zero.
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("%d is a positive number.", num);
    }
    else if (num < 0)
    {
        printf("%d is a negative number.", num);
    }
    else
    {
        printf("You Entered zero");
    }
}
