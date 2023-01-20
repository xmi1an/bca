/* 49. Write a c program to input N and find out the sum, average, max, min, total even no and total odd no. [without use of array]
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, num, sum = 0, max = 0, min = 0, totalodd = 0, totaleven = 0;
    float avg;

    printf("How many numbers you have to entered : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter No : ");
        scanf("%d", &num);

        sum = sum + num;
        if (i == 1)
        {
            max = num;
            min = num;
        }
        if (num > max)
        {
            max = num;
        }
        if (num < min)
        {
            min = num;
        }
        if (num % 2 == 0)
        {
            totaleven = totaleven + num;
        }
        else
        {
            totalodd = totalodd + num;
        }
    }

    avg = sum / (float)n;

    printf("Sum : %d\n", sum);
    printf("Avg : %f\n", avg);
    printf("Max : %d\n", max);
    printf("Min : %d\n", min);
    printf("Sum of Odd No : %d\n", totalodd);
    printf("Sum of Even No : %d\n", totaleven);
}