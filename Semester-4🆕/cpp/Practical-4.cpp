#include <iostream>

using namespace std;

// define an inline function
inline int max(int x, int y) // inline function definition is placed here by the compiler at the point of call for example at line 15
{
       cout << "max() is called" << endl;
       return (x > y) ? x : y;
}

int main()
{
       int a = 10, b = 20;

       // call the inline function
       int m = max(a, b); // m is set to 20

       cout << m << endl; // prints 20

       return 0;
}