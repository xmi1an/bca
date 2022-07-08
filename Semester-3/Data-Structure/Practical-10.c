#include <stdio.h>
#define SIZE 5

int my_stack[SIZE];
int top = -1;

void push(int val)
{
	if (isStackFull())
	{
		printf("Stack is Full..\n");
	}
	else
	{
		top++;
		my_stack[top] = val;
		printf("Element Pushed : %d \n", val);
	}
}

int isStackFull()
{
	if (top == SIZE - 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void pop()
{
	if (isStackEmpty())
	{
		printf("Stack is Empty..\n");
	}
	else
	{
		printf("Element Popped : %d \n", my_stack[top]);
		top--;
	}
}

int isStackEmpty()
{
	if (top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int length()
{
	int count = 0, i = 0;
	if (isStackEmpty())
	{
		printf("Stack is Empty..\n");
	}
	else
	{
		while (i <= top)
		{
			count++;
			i++;
		}
		return count;
	}
}

void display()
{
	int i = 0;
	if (isStackEmpty())
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
	int i = 0;
	if (isStackEmpty())
		printf("Stack is Empty..\n");

	else
		printf("Top Item is : %d \n", my_stack[top]);
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
			exit(1);
		default:
			printf("Invalid Choice. \n\n");
		}
	}
	return 0;
}
