// friendly.cpp

#include <iostream>

class A {
public:
    int a1 = 1;
    int a2 = 2;
};

class B {
public:
    int b1 = 3;
    int b2 = 4;
};

// define a friendly function that takes two objects of class A and B
void friendly(A a, B b) {
    // print out the sum of the members of each class
    std::cout << "Sum of A: " << a.a1 + a.a2 << std::endl;
    std::cout << "Sum of B: " << b.b1 + b.b2 << std::endl;
}

int main()
{
    // make objects of each class
    A a;
    B b;

    // call friendly function
    friendly(a,b);

    return 0;
}

