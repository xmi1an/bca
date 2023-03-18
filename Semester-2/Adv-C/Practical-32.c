
#include<stdio.h> //Include Standard Input/ Output Header for Standard I/O Functions
#include<string.h> // Include String Header for string manipulation functions 

int main(int argc,char *argv[]) // Accept two parameters as input - argc that stores the size of command line arguments array and argv that stores the command line arguments array
{
    int i;
   //Check if there are any command line arguments passed
    if(argc>1)
    {
        //Check the first command line argument
        if(strcmp(argv[1],"find_file")==0)
        {
            //Execute the find_file dos command
            printf("\n Executing the find_file DOS Command\n");
            printf("\n Finding a file...");
        }
        else
        {
            //Print an error message 
            printf("\n Error: Unknown command \n");
        }
    }
    else
    {
        //Print an error message
        printf("\n Error: Please provide a command to execute \n");
    }
   
   return 0;
}