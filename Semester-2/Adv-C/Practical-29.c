
/* Include header files */
#include <stdio.h>
#include <stdlib.h>

/* Main function definition */
int main(void) 
{
	int empno; //Int variable to store emp number
    char empname[30]; //String variable to store emp name
    int basic; //Int variable to store emp basic 
	
    FILE *empfile; //Create a file pointer to read from input file
    
	/* Open a file to read from */
    empfile = fopen("empin.txt", "r");
   
    if (empfile == NULL) 
	{
        printf("Error reading file!\n"); //Print an error message if file not found 
    } 
	else 
	{		
        /* Read in values from file until end of file */
        while (fscanf(empfile, "%d %s %d", &empno, empname, &basic) != EOF) 
		{
            /* Create empout.txt */
            FILE *empoutfile = fopen("empout.txt", "a"); 
            
            /* Create variable to store the total amount */
            int total = basic + (basic * 0.3);
            
            /* Print the details to the file */
            fprintf(empoutfile, "Empno: %d\nName: %s\nBasic: %d\nTotal: %d\n", empno, empname, basic, total);
                
            /* Close the file */
            fclose(empoutfile);
        }
		
		/* Close the input file */
        fclose(empfile);
    }
	
    return 0;
}