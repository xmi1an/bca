#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  //1st manipulators is endl
  int a=10,b=20;
  cout<<"a="<<a<<endl;
  cout<<"b="<<b<<endl;
  //2nd manipulators is setw
  int a1=30,b1=50;
  cout<<"a1 = "<<a1<<setw(10)<<"b1 = "<<b1;
  return 0;
}