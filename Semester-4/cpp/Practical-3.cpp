/* Write a cpp program which explain the use of reference variable.  */

#include <iostream>
using namespace std;
int main()
{
  int a = 10;
  int &b = a; // Reference variable b, value is 10 and address is same as a
  cout << a << " " << b << endl; // 10 10
  ++b; // b = b + 1
  cout << a << " " << b << endl; // 11 11
  a = a + 2; // a = 13
  cout << a << " " << b; // 21 21
  return 0;
}
