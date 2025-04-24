#include <iostream>

// This code creates a class called "Example"
class Example
{
public:
  // The variable below is a 'static' member variable, which
  // means that every instance of the class 'Example' will have
  // the same value for this variable
  static int count;

  // This is the constructor for the class 'Example' and is
  // it is executed when an instance of 'Example' is created
  Example()
  {
    // Increment the static variable when the constructor is called
    // so that we can track how many instances of 'Example' exist
    count++;
  }
};

// We now need to define the static variable 'count' so that
// it can be accessed outside of the class.

int Example::count = 0;

int main()
{
  // Now we create three new objects of type 'Example'
  Example a;
  Example b;
  Example c;

  // 'count' will be equal to 3, since three instances
  // of 'Example' were created above
  std::cout << "Total Example objects created: " << Example::count << std::endl;

  return 0;
}