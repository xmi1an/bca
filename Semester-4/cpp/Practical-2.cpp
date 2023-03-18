#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  cout << fixed << setprecision(2);  // use fixed-point notation with 2 decimal places

  cout << 123.4567 << endl;  // prints 123.46
  cout << 987.6543 << endl;  // prints 987.65

  cout << setw(10) << left;  // set field width and left-justify values

  cout << 123 << endl;  // prints "     123"
  cout << 456 << endl;  // prints "     456"

  return 0;
}