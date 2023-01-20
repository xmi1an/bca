/* 50. Write a c program totalodd input N no and find out the sum, average, max, min, total even no and total odd no. [using array] */

#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, num[20], sum = 0, max = 0, min = 0, totalodd = 0, totaleven = 0;
    float avg;

    printf("How many numbers you have to entered : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter No : ");
        scanf("%d", &num[i]);
        sum = sum + num[i];
        if (i == 0)
        {
            max = num[0];
            min = num[0];
        }
        if (num[i] > max)
        {
            max = num[i];
        }
        if (num[i] < min)
        {
            min = num[i];
        }
        if (num[i] % 2 == 0)
        {
            totaleven = totaleven + num[i];
        }
        else
        {
            totalodd = totalodd + num[i];
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