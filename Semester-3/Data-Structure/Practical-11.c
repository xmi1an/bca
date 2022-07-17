/* 11. Write a c program which convert infix string to postfix string. */
#include <stdio.h>

char stack[20];
int top = -1;

void push(char x)
{
    stack[++top] = x;
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

int priority(char x)
{
    if (x == '(')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    if (x == '^')
        return 3;
    return 0;
}

int main()
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
            while ((x = pop()) != '(')
                printf("%c ", x);
        }
        else
        {
            while (priority(stack[top]) >= priority(*e))
                printf("%c ", pop());
            push(*e);
        }
        e++;
    }

    while (top != -1)
    {
        printf("%c ", pop());
    }
    return 0;
}