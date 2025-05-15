
//This code starts with a preprocessor directive to include the standard input output 
//header which contains the function definitions that we will use in this program 
#include <stdio.h>

//Now we will declare the main function with its return type as "int"
int main(int argc, char* argv[])
{
//Now we will declare 2 character pointer variables that will store the path of the source 
//file and the target file
  char sourceFile[100], destFile[100];

//Now we will check if the number of command line arguments is 3 which is correct for our program
  if(argc == 3)
  {
//Next we will store the first two arguments which are the path of the source and the target 
//file in the two character pointer variables that we declared
    strcpy(sourceFile, argv[1]);
    strcpy(destFile, argv[2]);

//Next we will open a file pointer to read from the source file
    FILE* src = fopen(sourceFile, "r");

//Then we will conditionally check if the file pointer is valid
    if(src != NULL)
    {
//Next we will open another file pointer to write the content of the source file, to the target file
      FILE* dest = fopen(destFile, "w");

//Now we would create an integer to store the size of the file that we read
      int size;

//We will use an array of characters to store the content of the source file 
      char buffer[100];

//Now we will use an infinite loop and break it when we reach the end of the source file 
        while(1)
        {
//We will use the fread function from the standard input output library to read data from the 
//source file and copy it to the destination file 
            size = fread(buffer, 1, 100, src);
            fwrite(buffer, 1, size, dest);

//We will use the feof function from the standard library to identify when we 
//reach the end of the source file
            if( feof(src))
            {
//When the EOF is reached, we would break the