/* 50. Write a c program to input N no and find out the sum, average, max, min, total even no and total odd no. [using array] */

#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, t[20], s = 0, mx = -32768, mn = 32767, to = 0, te = 0;
    float a;
    printf("How many nos. you have to entered=");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter No=");
        scanf("%d", &t[i]);
        s = s + t[i];
        if (t[i] > mx)
        {
            mx = t[i];
        }
        if (t[i] < mn)
        {
            mn = t[i];
        }
        if (t[i] % 2 == 0)
        {
            te = te + t[i];
        }
        else
        {
            to = to + t[i];
        }
    }

    a = s / (float)n;

    printf("Sum=%d\n", s);
    printf("Avg=%f\n", a);
    printf("Max=%d\n", mx);
    printf("Min=%d\n", mn);
    printf("Sum of Odd No=%d\n", to);
    printf("Sum of Even No=%d\n", te);
}