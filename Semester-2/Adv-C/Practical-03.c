
#include<stdio.h>

int factorial(int number); // declare the prototype of factorial function 

int main(){
  int number; 
 
  printf("Enter an integer: "); // prompt user to enter an integer 
  scanf("%d", &number); // read the input and store in the variable number

  int result = factorial(number); // call the factorial function to calculate factorial 

  printf("The factorial of %d is %d\n", number, result); // print the result
  return 0;
}

int factorial(int number){
    if(number == 0) // base case
       return 1; // factorial of 0 is 1
    else
       return number * factorial(number - 1); // recursive call
}