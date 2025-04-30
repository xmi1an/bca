#include <stdio.h>

int main()
{
    int rollNo, sub1, sub2, sub3, total;
    float percentage;
    char name[30];
    char class[5];

    // Read the roll number, name, and marks of the student
    printf("Enter roll number: ");
    scanf("%d", &rollNo);

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter marks of subject 1: ");
    scanf("%d", &sub1);

    printf("Enter marks of subject 2: ");
    scanf("%d", &sub2);

    printf("Enter marks of subject 3: ");
    scanf("%d", &sub3);

    // Calculate total and percentage
    total = sub1 + sub2 + sub3;
    percentage = (float)total / 3;

    // Determine the class based on percentage
    if (percentage >= 60)
    {
        sprintf(class, "First");
    }
    else if (percentage >= 50)
    {
        sprintf(class, "Second");
    }
    else if (percentage >= 40)
    {
        sprintf(class, "Pass");
    }
    else
    {
        sprintf(class, "Fail");
    }

    // Display the result
    printf("\nResult\n");
    printf("---------------------------------------------------\n");
    printf("Roll No. Name Sub1 Sub2 Sub3 Total Per %% Class\n");
    printf("---------------------------------------------------\n");
    printf("%d %s %d %d %d %d %.2f %s\n", rollNo, name, sub1, sub2, sub3, total, percentage, class);

    return 0;
}
