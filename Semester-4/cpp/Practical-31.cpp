

// Header file that contains all the libraries used 
#include <iostream> //The library for input/output

//Creating a class (blueprint) called "Parent"
class Parent { 
public:
	// Default Constructor
	Parent() {
		std::cout << "Default Constructor from the Parent class called\n";
	}
}; 
 
// Creating a Derived class ( derived from the parent class) called "Child"
class Child : public Parent { 
public:
	// Default Constructor 
	// In this Constructor, We are also calling the constructor from Parent class as well as printing "Default Constructor from the Child class called"
	Child() { 
		Parent();
		std::cout << "Default Constructor from the Child class called\n";
	}
}; 

// Main Function 
int main() 
{ 
	// Create a object of the child class 
	Child obj;
	
	return 0;
}