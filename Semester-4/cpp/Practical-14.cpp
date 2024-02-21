#include <iostream> // include library for input and output

// create class Data
class Data {
private:
    int data_; // create private variable data_

public:
    // define get() and set() functions to access data_ privately
    int get() {
        return data_;
    }
    void set(int data) {
        data_ = data;
    }
};

// create a function outside of class Data to swap two objects of type Data
void swapData(Data &a, Data &b) {
    // create a temporary variable and store a's data in it
    int temp = a.get();

    // set a's data to be b's
    a.set(b.get());

    // set b's data to be a's (i.e. the temporary value)
    b.set(temp);
}

// main function
int  main() {
    // create two Data objects
    Data objA;
    Data objB;

    // initialize objA's data_ with value 5
    objA.set(5);

    // initialize objB's data_ with value 10
    objB.set(10);

    // print original data_ values
    std::cout << "Original values:\n";
    std::cout << "objA's data: " << objA.get() << "\n";
    std::cout << "objB's data: " << objB.get() << "\n";

    // swap objA and objB's data_
    swapData(objA, objB);

    // print out new data_ values
    std::cout << "New values:\n";
    std::cout << "objA's data: " << objA.get() << "\n";
    std::cout << "objB's data: " << objB.get() << "\n";

    return 0;
}
