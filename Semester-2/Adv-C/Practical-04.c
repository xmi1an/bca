
#include<stdio.h> //import library required to print on screen

//declare a function which will compute fibbonacci series
int fibonacci(int); 

int main() 
{
  int i, num;
  printf("Enter the number of terms: ");
  scanf("%d", &num); // read n terms from user
  
  //loop through first n terms of Fibonacci sequence
  for (i = 0; i < num; i++) 
  {
     printf("%d  ", fibonacci(i));
  }
 
  return 0;
}

// a recursive function that returns Fibonacci of n
int fibonacci(int n) 
{
  if (n <= 1)
    return n;
  else
    return (fibonacci(n-1) + fibonacci(n-2)); // recursive call of the same
}