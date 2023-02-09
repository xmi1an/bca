/* Write a cpp program which explains the use of a manipulators operator. */
#include <conio.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  cout << "Hello" << setw(30) << "World" << endl;
  getch();
  return 0;
}

// Explanation:
/*
setw() is a manipulator operator which is used to set the width of the output.
setw() is a member of iomanip header file.
setw() is used to set the width of the output.
 */