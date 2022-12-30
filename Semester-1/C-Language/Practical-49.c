/* 49. Write a c program to input N and find out the sum, average, max, min, total even no and total odd no. [with out use of array]
 */
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, t, s = 0, mx = 0, mn = 0, to = 0, te = 0;
    float a;
    printf("How many nos. you have to entered : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter No : ");
        scanf("%d", &t);

        s = s + t;
        if (t > mx)
        {
            mx = t;
        }
        if (t < mn)
        {
            mn = t;
        }
        if (t % 2 == 0)
        {
            te = te + t;
        }
        else
        {
            to = to + t;
        }
    }

    a = s / (float)n;

    printf("Sum : %d\n", s);
    printf("Avg : %f\n", a);
    printf("Max : %d\n", mx);
    printf("Min : %d\n", mn);
    printf("Sum of Odd No : %d\n", to);
    printf("Sum of Even No : %d\n", te);
}