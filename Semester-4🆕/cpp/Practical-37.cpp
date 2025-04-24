

// This code example shows runtime polymorphism in C++
#include<iostream>

// defining base class 
class Base {
public:
    // virtual function
    virtual void print()
    {
        std::cout<<"Printing Base class"<<std::endl;
    }
};

// deriving class 
class Derived : public Base {
public:
    // overriding virtual function 
    void print()
    {
        std::cout<<"Printing Derived class"<<std::endl;
    }
};

// main function 
int main()
{
    // creating an object of Base class
    Base *base = new Base;

    // calling the virtual function of Base class
    base->print();

    // creating an object of Derived class
    Derived *derived = new Derived();

    // calling the virtual function of Derived class
    derived->print();

    return 0;
}