/*  Write a program to swap value of two integer number using UDF. */

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    swap(&num1, &num2);
    printf("After swapping: %d %d\n", num1, num2);
    return 0;
}

/*
In this program, the swap function takes two pointer variables a and b. The values of these two variables are swapped using a temporary variable temp. In the main function, two integers are taken as input and the addresses of these variables are passed to the swap function. After the swap, the values of the variables are printed to show the result.
 */