/*  */

#include <iostream>
using namespace std;


#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &b=a;
    cout<<a<<" "<<b<<endl;
    ++b;
    cout<<a<<" "<<b<<endl;
    a=a+10;
    cout<<a<<" "<<b;
    return 0;
}