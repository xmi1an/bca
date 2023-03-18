

#include<iostream> //importing information from standard output stream
#include<conio.h> //importing information from conio.h for using getche()
using namespace std; //using tablename as std

class test //declaring a class
{
int a; //declaring an integer data type to store age
public:
	void getdata() //function to get the data from the user 
	{ 
		cout << "Enter age : " << endl; //printing statement to guide user
		cin >> a; //storing user input
	}
	void putdata() //function to display the data
	{
		cout << "Age : " << a << endl; //printing age stored
	}
}; //ending of class
int main() //program starts
{ 
	test obj[3]; //declare an array of object with size 3
	for(int i=0; i<3; i++) //loop to to read input 3 times
	{
		obj[i].getdata(); //objects calling function 
	}
	for(int i=0; i<3; i++) //loop to display outputwith taking input from the user
	{
		obj[i].putdata(); //objects calling putdata to display
	}
getche();
return 0;
}