
#include <stdio.h> //Include the stdio library
 
// function to swap two integers without pointers
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("Swapped values: a = %d, b = %d\n", a, b);
}

// call swap function
void main(){
    int a = 10;
    int b = 20;
    printf("Original values: a = %d, b = %d\n", a, b);
    
    swap(a, b);
}