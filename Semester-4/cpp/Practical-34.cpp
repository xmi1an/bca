

#include<iostream>

int main()
{
    // Create an array of 4 pointers
    void* arr[4];

    // Create 4 objects
    int obj1 = 8;
    double obj2 = 9.5;
    char obj3 = 'A';
    float obj4 = 3.6;

    // Assign pointers to objects
    arr[0] = &obj1;
    arr[1] = &obj2;
    arr[2] = &obj3;
    arr[3] = &obj4;

    // Print pointer values
    for(int i=0; i<4; i++)
    {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}