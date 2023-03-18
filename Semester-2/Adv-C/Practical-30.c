
#include <stdio.h> 

int main() 
{ 
    /* Declaring new variables */
    FILE *fp; 
    char ch; 
  
    /* Opening a file "example.txt" in read mode */
    fp = fopen("example.txt", "r"); 
  
    /* Checking whether it is empty or not */
    if (fp == NULL) { 
        printf("File is empty"); 
        return 0; 
    } 
  
    /* Navigate to the fifth character in the file */
    fseek(fp, 5, SEEK_SET); 
    
	/* Get position of current character */
    ftell(fp); 
  
    /* Read the character at current location */
    ch = fgetc(fp); 
  
    printf ("The character at offset 5 is %c",ch); 
  
    /* Closing the file */
    fclose(fp); 
    
    return 0; 
}