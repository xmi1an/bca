
//This code is to design a structure student_records to contain
// Roll_no, Name, City and Percentage obtained
//And to then read data for 5 students
//and display them

#include<stdio.h>

// A structure type is defined at the top with
// four fields, Roll_no, Name, City and Percentage
struct student_records {
    int Roll_no;
    char Name[30];
    char City[20];
    float Percentage;
};

void main() {
    // Declare an array of 5 elements
    // for the student_records structure
    struct student_records record[5];

    // Loop to read data for 5 students
    for (int i=0; i<5; i++)
    {
        // Read data for one student
        printf("Enter Roll_no of student %d: ", i+1);
        scanf("%d", &(record[i].Roll_no));
        printf("Enter Name of student %d: ", i+1);
        scanf("%s", record[i].Name);
        printf("Enter City of student %d: ", i+1);
        scanf("%s ", record[i].City);
        printf("Enter Percentage of student %d: ", i+1);
        scanf("%f", &(record[i].Percentage));
    }

    // Loop to print data for 5 students
    for (int i=0; i<5; i++)
    {
        // Print info for one student
        printf("Student %d\n", i+1);
        printf("Roll_no: %d\n", record[i].Roll_no);
        printf("Name: %s\n", record[i].Name);
        printf("City: %s\n", record[i].City);
        printf("Percentage: %f\n", record[i].Percentage);
    }
}
