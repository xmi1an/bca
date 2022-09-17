/*
10. Write a C program for summation, subtraction, multiplication, division of two
number using Arithmetic operator.
*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int n1, n2, add, sub, multiply;
    float d;

    clrscr();

    printf("\nEnter n1:");
    scanf("%d", &n1);

    printf("\nEnter n2:");
    scanf("%d", &n2);

    add = n1 + n2;
    sub = n1 - n2;
    multiply = n1 * n2;
    d = n1 / (float)n2;

    printf("\nAddition : %d", add);
    printf("\nSubtraction : %d", sub);
    printf("\nMultiplication : %d", multiply);
    printf("\nDivision : %f", d);

    getch();
}