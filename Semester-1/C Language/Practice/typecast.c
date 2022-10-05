#include <stdio.h>
#include <math.h>
int main()
{
    float a = 1.2;
    int b = a; // Compiler will throw an error for this
    // int b = (int)a + 1;
    printf("Value of a is %f\n", a);
    printf("Value of b is %d\n", b);
}
