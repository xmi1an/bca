
/* Program to demonstrate nesting of functions */

#include <stdio.h>

// define a function to calculate square of a number 
int square(int num)
{ 
    int result = num*num;
    return result;
}

// define a function to calculate cube of a number 
int cube(int num)
{
    // calling another function within this function 
    int result = square(num)*num; 
    return result;
}

int main()
{
    int number = 5; //take number as input 
    int result1 = square(number);
    int result2 = cube(number);
    
    // print square and cube of the number 
    printf("Square of %d is %d\n", number, result1); 
    printf("Cube of %d is %d\n", number, result2);
 
    return 0;
}