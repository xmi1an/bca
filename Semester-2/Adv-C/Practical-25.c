
#include<stdio.h>

int main()
{
    FILE *input; // creating file pointer

    // open file in write mode
    input = fopen("input", "w"); 

    // check if the file created successfully
    if(input == NULL) 
    {
        printf("Error opening file!\n");
        return 0;
    }

    int age; //creating integer variable
    char c;  // creating character variable

    // prompting user to enter age
    printf("Please enter your age: ");

    // looping until user enter Enter or G
    while( (c = getchar()) != '\n' && c != EOF)
    {
        fputc(c, input); // writing in file
    }

    // closing file
    fclose(input);

    // open file again in read mode
    input = fopen("input", "r"); 

    // print the contents of file
    printf("\nYour Details:\n");
    while((c = fgetc(input)) != EOF)
    {
        printf("%c", c);
    }
    printf("\n");

    // close opened file
    fclose(input);

    return 0;
}