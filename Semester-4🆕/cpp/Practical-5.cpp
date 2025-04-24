#include <iostream>
using namespace std;

// default arguments
int person(int age = 0, string fname = "No First Name", string lname = "No Last Name")
{
    cout << "Age: " << age << endl;
    cout << "First Name: " << fname << endl;
    cout << "Last Name: " << lname
        << endl
        << endl;
    return 0;
}

int main()
{
    // Call the function with only the first argument
    person();

    // Call the function with the first and second arguments
    person(25, "Jane");

    // Call the function with all three arguments
    person(25, "Jane", "Doe");

    return 0;
}
