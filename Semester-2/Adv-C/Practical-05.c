/* Write a program using a recursive function to find the GCD (Greatest Common Divisor) of
two Positive integer numbers. */

#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    int num1, num2, result;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    result = gcd(num1, num2);
    printf("The GCD of %d and %d is %d\n", num1, num2, result);
    return 0;
}

/*
In this program, the gcd function takes two integer parameters, a and b. If b is 0, the function returns a as the GCD. If b is not 0, the function calls itself with b and a % b as the two parameters, which will continue until b becomes 0. The GCD is then returned to the caller. The main function takes input of two positive integers and calls the gcd function to find the GCD of these numbers.
 */