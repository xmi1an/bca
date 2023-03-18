
#include <stdio.h>

/* This is a structure, called details, and it stores information about a student */
struct details 
{
    int age;
    int year;
    char name[20];
}; 

/* Function, findResult, will take the details of a student and print some information */
void findResult(struct details student_info)
{
    printf("Student's Name: %s \n", student_info.name);
    printf("Age of the student is: %d \n", student_info.age);
    printf("The student is in year: %d \n", student_info.year);
}

int main()
{
    /* Declaring variables of structure details */
    struct details student1;
    struct details student2;
    
    /* Intiliazing the student details */
    student1.age = 5;
    student1.year = 1;
    strcpy(student1.name, "Jack");

    student2.age = 10;
    student2.year = 5;
    strcpy(student2.name, "James");
    
    /* Calling the function to get the result */
    findResult(student1);
    printf("\n");
    findResult(student2);

    return 0;
}