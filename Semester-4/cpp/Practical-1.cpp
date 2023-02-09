/*  */

#include <iostream>
using namespace std;

int a = 30, b = 40; // Global variable

int main()
{
    int a = 10, b = 20; // Local variable
    cout << "The ans is of Local Variables : " << a + b << endl;
    cout << "The ans is Global : " << ::a + ::b; // :: is scope resolution operator
}