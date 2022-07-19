/* 10. Write a c program for implementing of stack and its operation. */

#include <stdio.h>
#define SIZE 5

int my_stack[SIZE];
int top = -1;

void push(int val)
{
	if (top == SIZE - 1)
	{
		printf("Stack is Full..\n");
	}
	else
	{
		my_stack[top] = val;
		printf("Element Pushed : %d \n", val);
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
		printf("Element Popped : %d \n", my_stack[top]);
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
			printf("%d \n", my_stack[i]);
			i++;
		}
	}
}

void peek()
{
	if (top == -1)
		printf("Stack is Empty..\n");

	else
		printf("Top Item is : %d \n", my_stack[top]);
}

void popall()
{
	if (top == -1)
	{
		printf("Stack is Empty..\n");
	}
	else
	{
		while (top != -1)
		{
			pop();
		}
	}
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
		printf("6. Pop All. \n");
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
		case 6:
			popall();
			break;
		case 0:
			printf("Bye Bye \n \n");
			exit(1);

		default:
			printf("Invalid Choice. \n\n");
		}
	}
}
