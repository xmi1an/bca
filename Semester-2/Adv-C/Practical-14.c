
#include <stdio.h> // Include input and output library

struct person // Define the person structure
{
    char name[100];
    int code;
    int age;
    int weight;
    int height;
};

int main() // Program starting point
{
    struct person persons[10]; // Declare an array of person objects
    int personsAboveWeight = 0; // To count the number of persons with weight > 50

    printf("Enter the data for 10 persons\n"); // Instructions

    // Loop through each person and store the data
    for(int i = 0; i < 10; i++)
    {
        printf("Enter name: ");
        scanf("%s", persons[i].name); // Read name

        printf("Enter code: ");
        scanf("%d", &persons[i].code); // Read code

        printf("Enter age: ");
        scanf("%d", &persons[i].age); // Read age

        printf("Enter weight: ");
        scanf("%d", &persons[i].weight); // Read weight

        printf("Enter height: ");
        scanf("%d", &persons[i].height); // Read height
    }

    printf("Persons with weight > 50 and height > 40:\n"); // Print title
    printf("Name\tCode\tAge\tWeight\tHeight\n"); // Print table header

    // Loop through each person and print details if condition holds true
    for(int i = 0; i < 10; i++)
    {
        if(persons[i].weight > 50 && persons[i].height > 40)
        {
            personsAboveWeight++; // Increase count for number of persons
            printf("%s\t%d\t%d\t%d\t%d\n", persons[i].name, persons[i].code, persons[i].age, persons[i].weight, persons[i].height); // Print the details
        }
    }

    // Print the number of persons
    printf("Number of persons with weight > 50 and height > 40: %d\n", personsAboveWeight);

    return 0; // Return 0 to indicate normal termination
}
