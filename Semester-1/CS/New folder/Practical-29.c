/* 29. Write a C program to display first 5 Armstrong number. */

#include <stdio.h>
#include <conio.h>
void main()
{
    int temp, arm = 1, n = 1, rem, sum, cube;

    printf("Armstrong Numbers... \n");
    while (n <= 5)
    {
        temp = arm; //
        sum = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            cube = rem * rem * rem;
            sum = sum + cube;
            temp = temp / 10;
        }
        if (arm == sum)
        {
            printf("%d \n", arm);
            n++;
        }
        arm++;
    }
}