
#include <stdio.h> 
#include <stdlib.h> // includes the library that provides functions to send and receive commands from operating system 

//Main function starts here 
int main( int argc, char *argv[]) { 
  FILE *fp1; //creates a file pointer 
  FILE *fp2; //creates a file pointer 
  FILE *fp3; //creates a file pointer 

  int n1, n2; //variable to store integer numbers
  
  fp1=fopen(argv[1],"r"); //command to open DATA1 text file in read mode
  fp2=fopen(argv[2],"r"); //command to open DATA2 text file in read mode
  fp3=fopen("DATA","w"); //command to open a new file DATA in write mode
  
  // loop to read numbers from text files and compare them 
  while(fscanf(fp1,"%d",&n1) != EOF && fscanf(fp2,"%d",&n2) != EOF) {
    if (n1 <= n2) { 
      fprintf(fp3,"%d \n",n1); //write the smaller number into DATA
      fscanf(fp1,"%d",&n1);    //update n1 so that we can compare the next number
    }
    else { 
      fprintf(fp3,"%d \n",n2); //write the smaller number into DATA
      fscanf(fp2,"%d",&n2);    //update n2 so that we can compare the next numbers
    }
  }
  
 // to write the leftover numbers from either file 
  while(fscanf(fp1,"%d",&n1) != EOF) 
    fprintf(fp3,"%d \n",n1); 
  while(fscanf(fp2,"%d",&n2) != EOF) 
    fprintf(fp3,"%d \n",n2);
  
  fclose(fp1); // close the DATA1 text file 
  fclose(fp2