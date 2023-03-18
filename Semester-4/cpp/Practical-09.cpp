#include <iostream> 

// A static member function can only access static data members
// and other static member functions of a class
class Student 
{ 
private: 
    // static data member
    static int studentCount; 

public: 
    // Constructor to increment student count 
    Student() 
    { 
        studentCount++; 
    } 
  
    // static member function 
    static int getStudentCount() 
    { 
        return studentCount; 
    } 
}; 
  
// static data member initialization 
int Student::studentCount = 0; 

// main function  
int main() 
{ 
    Student s1; 
    Student s2;
	
	// calling static member function
    int studentCount = Student::getStudentCount(); 
    
     // printing student count 
    std::cout << "Student count is: " << studentCount; 
    return 0; 
}