
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
  
  // Declare files for even and odd numbers  
  FILE *pr;
  FILE *pa;
  
  // Open the file with series of integer numbers  
  pr=fopen("data","r");
  if(pr==NULL) {  // Check if the file exists, print error if it doesn't
    printf("Error!");
    exit(1);
  }
  
  // Open even and odd number files, or create them if they don't already exist
  pa=fopen("odd.txt","w+");
  pr=fopen("even.txt","w+");
  
  int num;  // Variable to hold individual numbers
  
  // Read in and process each number
  while(fscanf(pr,"%d",&num)>0)
  {
    if(num%2==0)    // If number is even
      fprintf(pr,"%d",num);  // Write it to the even file
    else  // If number is odd
      fprintf(pa,"%d",num);  // Write it to the odd file 
  }
  
  // Print the files out to the screen  
  fclose(pr);  // Close the two files
  fclose(pa);
  
  pr = fopen("even.txt","r");  // Open the even file for reading
  pa = fopen("odd.txt","r");  // Open the odd file for reading
  
  int even;
  int odd;
  
  // Print out the even numbers
  printf("The even numbers are:\n");
  while (fscanf(pr, "%d", &even)>0)
    printf("%d\n", even);
  
  // Print out the odd numbers
  printf("\nThe odd numbers are:\n");
  while (fscanf(pa, "%d", &odd)>0)
    printf("%d\n",odd);
  
  // Close the files after done reading
  fclose(pr);
 