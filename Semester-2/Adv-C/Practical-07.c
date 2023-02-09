/* Write a function prime that returns 1 if its argument is a prime and return zero Otherwise. */

#include <stdio.h>

int prime(int num)
{
    int i;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num, result;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    result = prime(num);
    if (result == 1)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}
