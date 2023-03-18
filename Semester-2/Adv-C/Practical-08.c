
#include<stdio.h> 

//user defined function to sort array
void sortArray (int arr[], int len)
{
    int temp, i, j;
    for (i = 0; i < len-1; i++) 
    {
        for (j = 0; j < len-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                //swap elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

//main function
int main(void) 
{
    //given array of unsorted integers 
    int arr[] = {31, 12, 63, 9, 4};
    int len = sizeof(arr)/sizeof(arr[0]); 
    
    //call user defined function to sort array
    sortArray(arr, len);
    
    //print the sorted array
    printf("Sorted array: \n");
    int i;
    for (i = 0;i < len; i++) 
    printf("%d ", arr[i]); 
    
    printf("\n");
    return 0;
}