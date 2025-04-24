

//include the library 
#include<iostream>
using namespace std;

//this function will be taking object argument
void printData(int temp){
	
	//print the argument value
	cout << "Value of argument: " << temp << endl;
}

//main function
int main(){
	
	//declare a object
	int x = 10;
	
	//call the printData() function 
	//and pass the object as the argument
	printData(x);
	
	return 0;
}