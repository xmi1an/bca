
#include <stdio.h> // Preprocessor directive

int main(void) // This defines our main function
{
  int num, result;
  printf("Enter a number: "); // Prompt the user to enter a number
  scanf("%d", &num); // Get the number
  
  result = checkPalindrome(num); // Call the user defined function 

  // Check the result and print the answer
  if(result == 1) 
      printf("%d is Palindrome\n", num);
  else 
      printf("%d is not Palindrome\n", num);
  
  return 0; // Return statement
}

// User defined function to check for Palindrome
int checkPalindrome(int num)
{
    int temp, remainder, reverse = 0;

    // Store the value of num in temp
    temp = num;

    // Reverse the number using while loop
    while(temp!=0){
        remainder = temp % 10;
        reverse = reverse*10 + remainder;
        temp = temp / 10;
    }

    // Check if reversed number is equal to original
    // and return the result
    if(num == reverse)
        return 1;
    else
        return 0;
}