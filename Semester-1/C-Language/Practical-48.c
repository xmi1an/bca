/* 48. Write a C program to find next minimum from the given array.  */

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5], max, min, i, j, nm;

    for (i = 0; i < 5; i++)
    {
        printf("Enter Element :");
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];

    for (i = 1; i < 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    printf("Max : %d\n", max);
    printf("Min : %d\n", min);

    nm = max;
    
    for (i = 0; i < 5; i++)
    {
        if (a[i] < nm && a[i] > min)
        {
            nm = a[i];
        }
        
    }

    printf("Next Min : %d\n", nm);
}