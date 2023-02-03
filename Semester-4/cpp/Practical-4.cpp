#include<iostream>
using namespace std;
inline int sum(int a,int b)
{
 return a+b;
}
inline int sub(int a,int b)
{
 return a-b;
}
inline int mul(int a,int b)
{
 return a*b;
}
inline int division(int a,int b)
{
 return a/b;
}
inline int mod(int a,int b)
{
 return a%b;
}
int main()
{   int a,b,choice;
    cout<<"enter a 1st number: ";
    cin>>a;
    cout<<"enter a 2nd number: ";
    cin>>b;
    cout<<"1.addition"<<endl;
    cout<<"2.substraction"<<endl;
    cout<<"3.multipalction"<<endl;
    cout<<"4.divison"<<endl;
    cout<<"5.modulo"<<endl;
    cout<<"6.exit"<<endl;
    cout<<"enter a choice"<<endl;
    cin>>choice;
     switch(choice)
    {
    case 1:cout<<a<<"+"<<b<<"="<<sum(a,b);
           break; 
    case 2:cout<<a<<"-"<<b<<"="<<sub(a,b);
           break;           
    case 3:cout<<a<<"*"<<b<<"="<<mul(a,b);
           break; 
    case 4:cout<<a<<"/"<<b<<"="<<division(a,b);
           break; 
    case 5:cout<<a<<"%"<<b<<"="<<mod(a,b);
           break;
    case 6:exit(0);
    default:cout<<"invalid choice"; 
    }
    return 0;
}