
// This program is written in C Language with comments
// All the code is written keeping in mind that the audience is 5 year students 
// who are new to programming

#include <stdio.h> // Include the library to use printf() and scanf()

int main()
{
    int arr[100]; // Declare an array of size 100
    int i, size; // Declare two integer variables
    printf("Enter the size of array: \n"); // This will ask the user to enter the  size of the array
    scanf("%d", &size); // Store the value in size
	
    // read elements of the array
    printf("Enter the elements of the array: \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]); // Store the values in the array
    }
    
    // print elements of the array in reverse
    printf("The elements of the array in reversed order: \n");
    for (i = size - 1; i >= 0 ; i--)
    {
        printf("%d\n", arr[i]); // print each element 
    }
    
    return 0; // program executed successfully
}