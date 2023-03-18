

#include <iostream>

// Virtual function is used to execute different tasks 
// in different classes without having to write multiple codes

class Parent {
public: 
    // create a virtual function
    virtual int getValue() {
        return 7;
    }
};

class Child : public Parent {
public:
    // create a function inherited from Parent class
    int getValue() {
        return 9;
    }
};

int main()
{
    Parent *p;

    // Instantiate Parent Class
    p = new Parent();

    // Print getValue() output of Parent Class
    std::cout << p->getValue() << std::endl;

    // Instantiate Child Class
    p = new Child();

    // Print getValue() output of Child Class
    std::cout << p->getValue() << std::endl;

    return 0;
}