
//Include the function stdio.h that allows us to use the Input/Output functions
#include<stdio.h>
 
//Define a macro to set the size
#define SIZE 10

int main () 
{
  //Declare and define the variables
  int numbers[SIZE];
  int *numptr; 
  int sum = 0;
  int i;
  
  //We use a cycle to accept 10 numbers as input
  for(i=0;i<SIZE;i++)
  {
    printf("Enter your number: ");
    scanf("%d",&numbers[i]);
  }
  
  //We set the *numptr of the array numbers
  numptr = numbers;
  
  //We use a cycle that adds the elements to the variable sum
  for (i=0;i<SIZE;i++)
  {
    sum += *numptr;
    numptr++;
  }
  
  //Display the sum
  printf("The sum is: %d",sum);
  
  //End of program
  return 0;
}