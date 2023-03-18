
// Include the stdio header file which contains // the definition of the printf and scanf functions  
#include <stdio.h>  

// Define a function 'gcd' that takes two 
// positive integer numbers as arguments and 
// returns the Greatest Common Divisor of them 
int gcd(int input1, int input2){  
  
    // Terminating condition if 
    // any of the two numbers given is 0  
    if(input1 == 0 || input2 == 0)  
    {  
        return 0;  
    }  
  
    // If both numbers given are equal, 
    // then return any of them  
    if(input1 == input2)  
    {  
        return input1;  
    }  
  
    // Recursive call gcd of the smaller number and 
    // the difference of the two numbers  
    if(input1 > input2)  
    {  
        return gcd(input2, input1 - input2);  
    }  
  
    return gcd(input1, input2 - input1);  
}  

// Drive program
int main(void) 
{  
    int input1, input2;  
  
    printf("Please input two positive integers\n"); 
    printf("Number1: "); 
    scanf("%d", &input1); 
    printf("Number2: "); 
    scanf("%d", &input2);

    int result = gcd(input1, input2);  
    printf("GCD of %d and %d is: %d\n", input1, input2, result); 
    
    return 0; 
}