

#include <iostream> 

//We can use constructors to quickly create an object 
//with some predetermined values. 
class Rectangle 
{ 
    int l, b; 

public: 
    //Creating a constructor without any arguments 
    Rectangle() 
    { 
        l = 0; 
        b = 0; 
    } 
  
    //Constructor with two arguments 
    Rectangle(int l,  int b) 
    { 
        //'this' is a keyword that refers to the current object
        this->l = l;   
        this->b = b; 
    } 
}; 

int main() 
{ 
    //Creating objects for both constructors 
    Rectangle r1;     
    Rectangle r2(5, 10); 
  
    return 0; 
}