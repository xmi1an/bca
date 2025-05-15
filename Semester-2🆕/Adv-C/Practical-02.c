#include <stdio.h>
#include <conio.h>
/*Defining the function factorial which will help to calculate the factorial of given number */
int factorial(int num){ 
  int fact = 1; 
  int i; 
  
  /* Here we are using loop to calculate the factorial starting from 1 to the given num*/ 
  for(i=1; i<=num; i++){ 
    fact =fact*i; /* multiplying each factor to get the factorial */  
  }
  /*returns the calculated factorial*/        
  return fact; 
} 

/*Main function*/ 
void main(){ 
  /*Declaring variables*/ 
  int num;
  int fact;
  
  /*taking user input*/
  printf("Enter a number: ");
  scanf("%d", &num);
  
  /*calling the factorial function*/
  fact = factorial(num);
  
  /*printing the output to user */
  printf("The factorial of %d is %d",num,fact);

}