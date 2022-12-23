#include <stdio.h>

int main()
{
    int a = 10, b = 20;

    if (a >= b)
    {
        if (a == b)
        {
            printf("A is equal to B");
        }
        else
        {
            printf("A is greater than B");
        }
    }
    else
    {
        printf("B is Greater than A");
    }
}