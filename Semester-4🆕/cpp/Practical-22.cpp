

#include <iostream>

int main() 
{
    int binary_a, binary_b;  // declare two variables to store binary numbers
 
    cout << "Enter first binary number: ";  // ask user for first binary number
    cin >> binary_a; // read binary number from user
 
    cout << "Enter second binary number: ";  // ask user for second binary number
    cin >> binary_b; // read binary number from user
 
    int result = binary_a + binary_b;  // use + operator to add both binary numbers
 
    cout << "Result after addition of binary numbers: " << result; // print result
 
    return 0;
}