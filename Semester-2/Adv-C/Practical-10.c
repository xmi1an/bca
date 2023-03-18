struct personal {
    char name[20];
    int date_of_joining; 
    int salary;
};

//Now we set out main function 
int main(){
    //We can now declare an instance of our structure, name it 'person'
    struct personal person;

    //Now let us get user input of the persons name
    printf("Please enter the persons name: ");
    scanf("%s", person.name);

    //Next we'll get the date they joined
    printf("Please enter the persons Date of Joining (int): "); 
    scanf("%d", &person.date_of_joining);

    //And finally the salary
    printf("Please enter the persons salary (int): ");
    scanf("%d", &person.salary);

    //Now we can print this data to the screen
    printf("Name: %s\nDate of Joining: %d\nSalary: %d\n", person.name, person.date_of_joining, person.salary);
};