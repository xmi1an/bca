
//include library headers 
#include <stdio.h>  
#include <stdlib.h> 

int main() 
{ 
    // constant variable 
    const int SIZE = 5; 
  
    // memory allocation using malloc 
    int* ptr = (int*)malloc(SIZE * sizeof(int)); 
  
    // using address of operator to store values 
    *(ptr) = 10; 
    *(ptr+1) = 20; 
    *(ptr+2) = 30; 
    *(ptr+3) = 40; 
    *(ptr+4) = 50; 
  
    // printing the values of ptr vector 
    for (int i=0; i<SIZE; i++) 
        printf("%d ", *(ptr+i)); 
  
    // memory deallocation using free() 
    free(ptr); 
  
    return 0; 
}