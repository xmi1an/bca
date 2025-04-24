

#include <iostream>

//Defining a class as a Superclass
class SuperClass { 
    public:
        //Variable Declaration
        int num;
  
        //Member Function Declaration
        int getNum()
        {
            return num;
        }
}; 

//Defining the subclass derived from Superclass 
class SubClass : public SuperClass { 
    public:
        //Member Function declaration
        int getNum2()
        {
            return num;
        }
};

//Defining the sub-subclass derived from SubClass
class SubSubClass : public SubClass { 
    public:
    	//Member Function declaration
        int getNum3()
        {
            return num;
        }
}; 

int main() 
{ 
    SuperClass mySuperObject; 
    SubClass mySubObject; 
    SubSubClass mySubSubObject; 

    mySuperObject.num = 10; 
    
    //Setting the data of subclass object 
    mySubObject.num = 20; 

    //Setting the data of subsubclass object 
    mySubSubObject.num = 30; 

    //Accessing the getNum of SuperClass;
    std::cout << mySuperObject.getNum() << "\n"; 

    //Accessing the getNum2 of SubClass;
    std::cout << mySubObject.getNum2() << "\n";  

    //Accessing the getNum3 of SubSubClass;
    std::cout << mySubSubObject.getNum3() << "\n";  

    return 0; 
}