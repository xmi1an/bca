/* 11. Write a c program which convert infix string to postfix string. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char stack[20];
int top = -1;

void push(char x)
{
    top++;
    stack[top] = x;
}

char pop()
{
    char item;

    if (top == -1)
    {
        return -1;
    }
    else
    {
        item = stack[top];
        top--;
        return item;
    }
}

int priority(char sym)
{
    if (sym == '^')
        return 3;
    else if (sym == '/' || sym == '*')
        return 2;
    else if (sym == '+' || sym == '-')
        return 1;
    else
        return -1;
}

void main()
{
    char exp[10];
    char *e, x;

    printf("Enter the expression : ");
    scanf("%s", exp);

    printf("\n");

    e = exp;

    while (*e != '\0')
    {
        if (isalnum(*e))
            printf("%c ", *e);

        else if (*e == '(')
            push(*e);

        else if (*e == ')')
        {
            while (x = pop() != '(')
                printf("%c ", x);
        }

        else
        {
            while (priority(stack[top]) >= priority(*e))
            {
                printf("%c ", pop());
            }
            push(*e);
        }

        e++;
    }

    while (top != -1)
    {
        printf("%c ", pop());
    }
}
