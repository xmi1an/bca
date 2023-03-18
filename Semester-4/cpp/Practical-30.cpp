

/*This program shows the basics of virtual base classes in CPP 

Virtual base classes are different than normal classes because they guarantee that only one instance of the class will be created in an inheritance hierarchy.

First we include the iostream library so that we can use cin and cout for user input and output.  */

#include <iostream>

/*Now we define a base class with the keyword 'class'. This is the class from which other classes may inherit.*/
class BaseClass
{
public:
    //This is a public method that will be accessible to any classes that inherit from BaseClass
    void someMethod()
    {
        std::cout << "This is a method in the BaseClass" << std::endl;
    }
};

/*Now we define a VirtualBaseClass. This class looks the same, except we include the keyword 'virtual' before the word 'class' */
class VirtualBaseClass
{
public:
    //This is a public method that will be accessible to any classes that inherit from VirtualBaseClass
    void someMethod()
    {
        std::cout << "This is a method in the VirtualBaseClass" << std::endl;
    }
};

/*Now we define two classes that inherit from BaseClass and VirtualBaseClass respectively. Note that we include the keyword 'virtual' before the name of the class that we are inherting from.*/
class A : virtual public BaseClass
{
};

class B : virtual public VirtualBaseClass
{
};

/*Finally, we define a class that inherits from both A and B classes. Because we marked virtualBaseClass as virtual, there is only one instance of VirtualBaseClass in the hierarchy.*/
class C :  public A, public B
{
};

/*To test that this class works correctly, we create a class and call the someMethod() method from the virtual class.*/ 
int main()
{
    C c; 
    c.someMethod(); 
    return 0; 
}