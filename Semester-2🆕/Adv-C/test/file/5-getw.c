/* #include <stdio.h>
void main()
{

  FILE *fp;
  int num;
  fp = fopen("test.txt", "w");
  if (fp == NULL)
    printf("File not found");
  putw(5, fp);
  fclose(fp);
}
 */

#include <stdio.h> //Include the standard input/output library
void main() //Start of the main function
{
  FILE *fp; //Declare a pointer to a file type
  int get; //Declare an integer variable
  fp = fopen("test.txt", "r"); //Open the file test.txt in read mode

  get = getw(fp); //Read the first integer from the file
  printf("Value in test.txt is : %d", get); //Print the integer

  fclose(fp); //Close the file
}
