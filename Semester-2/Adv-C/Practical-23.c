
// This program will create a file, store data into it, and then print that 
// data on the terminal

#include <stdio.h> // Include the standard C library for i/o
#include <stdlib.h> // Include the standard library for system calls and memory management

int main() {
    
    // Declare a character buffer, which will store the data to be written in the file
    char buffer[256];
 
    // Declare a FILE pointer
    FILE *fp;
    
    // Ask the user for the data to store
    printf("Please enter data to store in the file: \n");
    scanf("%s", buffer);
	
    /* Create a file, named myData.txt
       with write (w) permission (p) mode
    */
    fp = fopen("myData.txt", "w+"); 
	
    //write the data to the file    
    fwrite(buffer, 1, sizeof(buffer), fp);
    
    // Close the file
    fclose(fp);
	
	// Open the file again to read what we wrote
    fp = fopen("myData.txt", "r"); 
   
    // Read the data from the file and store it in the buffer
    char readBuffer[256] = {'\0'};
    fread(readBuffer, 1, sizeof(readBuffer), fp); 
	
    // Print the data that we read from the file
    printf("Data read from the file is: \n");
    printf("%s\n", readBuffer);
    
    // Close the file
    fclose(fp);
  
    return 0;
    
}