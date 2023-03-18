

#include <iostream> 

int main(){    
    
    // Creating a class to store (name and age) data of a person 
    class Person { 
    private:   
        std::string name; 
        int age; 
      
    public: 
        // Constructor with initialization list 
        Person(std::string name_val, int age_val)  
            : name{name_val}, age{age_val} { 
            // Empty body 
        } 

        // Function prints name and age 
        void PrintData() { 
            std::cout << name << " " << age << std::endl; 
        } 
    }; 

    // Creating object of class Person 
    Person PersonObj("abc", 30); 
    // Calls Person::PrintData() 
    PersonObj.PrintData(); 

    return 0; 
} 

/* Output ->
abc 30
*/