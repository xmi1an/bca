

// Below code is for implementation of overloading operators using friends functions
#include <iostream>
using namespace std;

class A
{
   int x;
   public:
      A(){x = 0;}
      A(int a){x = a;}
      friend int operator+(A, A); // here we declare the operator+ as a friend function so that it can access private members of class A
};

int operator+(A ob1, A ob2) // this is the definition of our operator+ function
{
   return(ob1.x + ob2.x); // it simply returns the sum of the two objects being passed
}

int main()
{
   A o1(5), o2(10);

   cout << o1 + o2; // here we are calling our overloaded + operator 
  
   return 0;
}