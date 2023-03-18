

#include<iostream> //This line includes the 'iostream' library which allows us to perform basic Input/Output operations 
using namespace std; //Using this namespace enables us to use predefined functions inside 'iostream'

//Creating a base class 'A'
class A{ 
	public: 
    	int a; 
}; 
  
//Creating another base class 'B'
class B : public A{ 
	public: 
    	int b; 
}; 

//Creating a derived class 'C' which inherits from classes A & B  
class C : public B { 
	public: 
    	int c; 
}; 

//Defining the main method which is the entry point of the program execution
int main(){ 
	C obj; //Creating an object 'obj' of class C 
	obj.a=10; //Assigning the value 10 to the attribute 'a' 
	obj.b=20; //Assigning the value 20 to the attribute 'b'
	obj.c=30; //Assigning the value 30 to the attribute 'c'
  	cout << "Value of a : " << obj.a << endl; //Printing statement and the value of 'a' 
	cout << "Value of b : " << obj.b << endl; //Printing statement and the value of 'b' 
	cout << "Value of c : " << obj.c << endl; //Printing statement and the value of 'c' 
	return 0; 
}