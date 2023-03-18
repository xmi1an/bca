

#include <iostream> // include input/output library 

// define class Student 
class Student {
  public:
    // constructor 
    Student(std::string name) {
      std::cout << "Welcome to the class, " << name << std::endl; 
    } 
  
private:
  std::string name; 
};

int main () {
  // create an instance of the class 
  Student student("John"); 

  return 0; 
}