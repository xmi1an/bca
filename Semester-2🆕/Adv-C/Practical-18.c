
// This program will demonstrate how to swap two values using pointers and UDF

#include <stdio.h>

// Declare a function that will swap two values
void swap(int* a, int* b){ 
  int c = *a; 
  *a = *b; 
  *b = c; 
} 

int main(){ 
  
  int x = 5; 
  int y = 10; 

  // Print the original values
  printf("Original Values: x = %d and y = %d \n", x, y); 

  //Call the swap function to swap the values
  swap(&x, &y); 

  //Print the swapped values  
  printf("Swapped Values: x = %d and y = %d \n", x, y); 

  return 0; 
}