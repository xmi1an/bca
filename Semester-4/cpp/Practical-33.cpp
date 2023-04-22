

#include <iostream> 

int main() 
{ 
    // Create an integer variable and assign it a value 
    int var = 10; 
  
    // Create a pointer to an integer 
    int *ptr; 
 
    // Assign the address of var to ptr 
    ptr = &var; 
  
    /* 
    Print the value of var and address of var 
    using both var and ptr 
    */
    std::cout << "Value of var is= " << var << std::endl; 
    std::cout << "Address of var is= " << &var << std::endl; 
  
    // Print the value of var using pointer 
    std::cout << "Value of ptr is= " << ptr << std::endl; 
  
    // Print the address of ptr using ptr 
    std::cout << "Address of ptr is= " << &ptr << std::endl; 
  
    return 0; 
}