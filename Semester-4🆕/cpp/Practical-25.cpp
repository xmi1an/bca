

//Include header file which has the definitions of input output stream functions 
#include <iostream>

//Base class Declare its name
class Vehicle {
public://Declare data member
	int speed;
};

//Subclass Declare its name
class Car: public Vehicle {
public://Declare data member
	int door;
};

//main function
int main() {
	//Define an object of sub class
	Car car;
	
	//Initialize the data member of the sub class
	car.door = 4;

	//Access the data member of the base class that is inherited in the subclass
	car.speed = 90;
	
	//Print the value of data member of the base class
	std::cout << "Speed of the car is: " << car.speed; 

	//Return 0 for successful execution of the program
	return 0;
}