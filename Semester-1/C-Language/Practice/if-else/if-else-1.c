/* Check whether the number is even or odd */

#include <stdio.h>

void main()
{
    int n;

    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
