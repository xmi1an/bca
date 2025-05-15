/* 10. Write a c program for implementing of stack and its operation. */

#include <stdio.h>
#include <conio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int value)
{
	if (top == SIZE - 1)
	{
		printf("Stack is Full..\n");
	}
	else
	{
		top++;
		stack[top] = value;
		printf("Element Pushed : %d \n", value);
	}
}

void pop()
{
	if (top == -1)
	{
		printf("Stack is Empty..\n");
	}
	else
	{
		printf("Element Popped : %d \n", stack[top]);
		top--;
	}
}

int length()
{
	int i = 0;
	if (top == -1)
	{
		printf("Stack is Empty..\n");
	}
	else
	{
		while (i <= top)
		{
			i++;
		}
	}
	return i;
}

void display()
{
	int i = 0;
	if (top == -1)
	{
		printf("Stack is Empty..\n");
	}
	else
	{
		while (i <= top)
		{
			printf("%d \n", stack[i]);
			i++;
		}
	}
}

void peek()
{
	if (top == -1)
		printf("Stack is Empty..\n");

	else
		printf("Top Item is : %d \n", stack[top]);
}

void main()
{
	int choice;
	int item, len;
	while (1)
	{
		printf("1. Push. \n");
		printf("2. Pop. \n");
		printf("3. Length \n");
		printf("4. Display. \n");
		printf("5. Peek. \n");
		printf("0. Exit. \n");

		printf("Enter Your Choice : ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("Enter Element to Push : ");
			scanf("%d", &item);
			push(item);
			break;
		case 2:
			pop();
			break;
		case 3:
			len = length();
			printf("Length : %d \n", len);
			break;
		case 4:
			display();
			break;
		case 5:
			peek();
			break;
		case 0:
			printf("Bye Bye \n \n");
			exit(1);

		default:
			printf("Invalid Choice. \n\n");
		}
	}
}
