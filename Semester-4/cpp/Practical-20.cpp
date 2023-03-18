

/* This program shows how a destructor works in the C++ programming language. 
   Destructors are called automatically when an object is deleted or goes out of scope. 
   They are useful for freeing memory and closing files. */

#include <iostream>
using namespace std;

// This is the class we will use to demonstrate the destructor
class MyClass
{
public:
	MyClass(); // Default constructor
	~MyClass(); // Destructor - Notice the ~ symbol

private:
	int myVar; // An integer variable
};

// Constructor - This is called when the object is created
MyClass::MyClass()
{
	myVar = 0; // Set the variable to 0
	std::cout << "Constructor called" << std::endl;
}

// Destructor - This is called when the object is deleted
MyClass::~MyClass()
{
	std::cout << "Destructor called" << std::endl;
}

// Main function
int main() 
{
	// Here we create a MyClass object and then delete it
	MyClass* obj = new MyClass(); // create the object
	delete obj; // delete the object

	return 0;
}