

#include <iostream> 
 
using namespace std; 
  
// Creating a Base class 
class Base 
{ 
public: 
    int x; 
  
    // Default Constructor 
    Base() 
    { 
        x = 0; 
    } 
  
    Base(int a) 
    { 
        x = a; 
    } 
}; 
  
// Crating a derived class from Base class 
class Derived : public Base 
{ 
public: 
    int y; 
  
    // Default Constructor 
    Derived() 
    { 
        y = 1; 
    } 
  
    Derived(int b) 
    { 
        y = b; 
    } 
  
    //printing the values of x and y using this pointer 
    void print() 
    { 
        // 'this' pointer is used to access the members 
        // of current object or class in which it lies. 
        cout << " x = " << this->x; 
        cout << " y = " << this->y; 
    } 
  
}; 
  
int main() 
{ 
    Base b(10); 
    Derived d(20); 
  
    d.x = b.x; 
  
    // Calling print() to show values of x and y. 
    d.print(); 
    return 0; 
}