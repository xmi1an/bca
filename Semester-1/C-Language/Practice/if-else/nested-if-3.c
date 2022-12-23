/* Check if three numbers are equal */

#include <stdio.h>

void main()
{

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a == b)
    {
        if (a == c)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    else
    {
        printf("No");
    }
}
