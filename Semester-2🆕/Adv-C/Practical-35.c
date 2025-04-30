
/* This program will explain the purpose of a macro in C Language
  * Macros essentially provide a way to speed up program execution by using pre-defined values
  * instead of having to type the value each time it is used. 
  */
  
#include <stdio.h>

/* Define a macro with the name "N" and assign it a value of 8 */
#define N 8
  
int main(void) {
    // Declare a variable to store a value
    int value;
    
    /* Use the value of N stored in the macro
        to set the value of the variable "value" */
    value = N;
    
    // Print the value of the variable
    printf("The value is: %d", value);
    
    return 0;
}