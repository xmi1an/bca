
#include <stdio.h>                             //including library for basic functions
#include <stdlib.h>                            //including library for extra functions

int main()                                     //main function definition
{
    int characterCount = 0, lineCount= 0;      //declare two variables to count number of characters and lines
    char c;                                    //declare a variable to store the characters in the file
    FILE *fp;                                  //declare a pointer of type FILE     
    fp = fopen("filename.txt","r");             //opening the file in read only mode

    if (fp == NULL)                            //if the file cannot be opened
    {
        printf("File not found! \n");          //print error
        return 0;
    }
    
    //traversing the file 
    while ((c = fgetc(fp)) != EOF)             
    {
        characterCount++;                       //counting the characters
        if (c == '\n')                         //if the character is new line 
        {
            lineCount++;                       //count the lines
        }
    }
    printf("Number of characters = %d \n", characterCount);     //print number of characters
    printf("Number of lines = %d \n", lineCount);             //print number of lines
    fclose(fp);                                //closing the file
    return 0;
}