
#include <stdio.h> 
 
int main()
{
    // Declaring variables 
    int *arr, numOfElements, i, j, temp; 

    // Ask the user to enter number of elements
    printf("How many elements do you wish to store? \n"); 
    scanf("%d", &numOfElements);
 
    // Allocating memory for the array
    arr = (int*) malloc(numOfElements * sizeof(int)); 

    // Ask user to fill the array
    printf("Enter %d numbers:\n", numOfElements);
    for(i = 0; i < numOfElements; i++)
    {
        scanf("%d", arr+i);
    }

    // Sorting the array using Bubble Sort
    for(i = 0; i < (numOfElements - 1); i++)
    {
        for(j = 0; j < (numOfElements - i - 1); j++)
        {
            if(*(arr+j) > *(arr+(j+1)))
            {
                temp = *(arr+j);
                *(arr+j) = *(arr+(j+1));
                *(arr+(j+1)) = temp;
            }
        }
    }
 
    // Print the sorted array
    printf("Sorted elements:\n");
    for(i = 0; i < numOfElements; i++)
    {
        printf("%d ", *(arr+i));
    }

    return 0;
}