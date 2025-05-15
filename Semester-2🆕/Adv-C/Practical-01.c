
#include <stdio.h>

int checkPalindrome(int num)
{
    int temp, remainder, reverse = 0;
    temp = num;

    while (temp != 0)
    {
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp = temp / 10;
    }

    if (num == reverse)
        return 1;
    else
        return 0;
}

void main()
{
  int num, result;
  printf("Enter a number: ");
  scanf("%d", &num);

  result = checkPalindrome(num);

  if(result == 1)
      printf("%d is Palindrome\n", num);
  else
      printf("%d is not Palindrome\n", num);
}
