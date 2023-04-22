 

#include<iostream>

using namespace std;

// create a class Parent
class Parent {
    private:
        int num1;
    public:
        // constructor that sets the value of num1
        Parent(int n1) {
            num1 = n1;
        }
        int getNum1() {
            return num1;
        }
};

// create a child class called child which inherits from Parent
class Child: public Parent {
    private:
        int num2;
    public:
        // constructor that sets the value of num1 (inherited from Parent class) and num2
        Child(int n1, int n2):Parent(n1){
            num2 = n2;
        }
        int getNum2() {
            return num2;
        }
};

// main function to test out the output
int main()
{
    // create an object of class Child with the given values
    Child obj(5, 10);

    // display the value of obj's num1 attribute
    cout<<"Value of num1 is: "<<obj.getNum1()<<endl;

    // display the value of obj's num2 attribute    
    cout<<"Value of num2 is: "<<obj.getNum2(); 

    return 0;
}
// output: Value of num1 is: 5
//        Value of num2 is: 10