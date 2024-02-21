

#include<iostream>

using namespace std;

// Defining Constructor for Initializing the Objects
class Geeks
{
  public:
  int id; // Id of the Object

  // Constructor
  Geeks(int d)
  {
    cout<<"Constructor Called\n";
    id = d; // Initializing Objects
  }

  Geeks()
  {
    cout<<"Geeks Default Constructor called";
  }

  // Destructor
  ~Geeks()
  {
    cout<<"Destructor Called";
  }

  // Returning Object
  Geeks getObj(Geeks x)
  {
    cout<<"Function getObj Called";
    cout<<"Object with id "<< x.id <<" is returned\n";
    return x;
  }
};

int main()
{
  // Declaring Object using Constructor
  Geeks obj1(5);

  Geeks obj2 = obj1.getObj(obj1);

  cout<<"id of obj2 is "<< obj2.id;

  return 0;
}

