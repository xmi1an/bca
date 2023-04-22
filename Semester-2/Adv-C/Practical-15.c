
//Include header files
#include<stdio.h> 
#include<stdlib.h> 
 
//Use main function
int main() 
{ 
    //Declare integers 
    int a = 5, b = 4; 
  
    //Declare pointer integer variable
    int *ptr1, *ptr2; 
  
    //Initialize pointer 
    ptr1 = &a; 
    ptr2 = &b; 
  
    //Print initial integer
    printf("The initial value of a = %d and b = %d \n", a, b); 
  
    // Use '*' operator for pointer pointing
    *ptr1 = *ptr1 + 1; 
    *ptr2 = *ptr2 + 5; 
  
    //Print updated integer
    printf("The modified value of a = %d and b = %d \n", a, b); 
  
    // Terminate the code
    return 0; 
 }