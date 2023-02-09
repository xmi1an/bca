/* Write a program to check the given number is Palindrome or not using User Defined Function (UDF). */

#include <stdio.h>
#include <conio.h>

int is_palindrome(int num)
{
    int reverse = 0, rem, original_num = num;
    while (num != 0)
    {
        rem  = num % 10;
        reverse = reverse * 10 + rem;
        num /= 10;
    }
    return (reverse == original_num);
}

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_palindrome(num))
    {
        printf("The number is a palindrome.\n");
    }
    else
    {
        printf("The number is not a palindrome.\n");
    }
    getch();
}