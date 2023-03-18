

#include <iostream>

//This is the parent class
class parent
{
public:
    //These are the base class members
    int p_value; 

    //This is a parent class constructor
    parent(int i)
	{
		p_value = i;
	}
};

//This is the first child class, derived from parent class
class child1 : public parent
{
public:
	//These are the child1 class members
    int c1_value; 
    
    //This is a child1 class constructor
    child1(int i, int j) : parent(i)
	{
		c1_value = j;
	}
};

//This is the second child class, derived from parent class
class child2 : public parent
{
public:
	//These are the child2 class members
    int c2_value; 
    
    //This is a child2 class constructor
    child2(int i, int j) : parent(i)
	{
		c2_value = j;
	}
};

//This is the third class, derived from two classes - child1 and child2 
class final_child: public child1, public child2
{
public:
    //These are the final_child class members
    int fc_value; 
    
    //This is the final_child class constructor
    final_child(int i, int j, int k, int l) : child1(i, k), child2(j, l)
	{
		fc_value = k + l;
	}

	//This is the final_child class member fcn
	void final_result()
	{
		std::cout << "Result is: " << fc_value;
	}

};

//Main function
int main() 
{
    //Create an instance of class final_child
    final_child obj(5, 10, 15, 20);

    //Print the final result
    obj.final_result();

    return 0;
}

//Output - Result is: 35