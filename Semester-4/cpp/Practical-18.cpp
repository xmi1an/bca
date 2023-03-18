

#include <iostream>

//Defining a class
class Rectangle {
public: 
  int width, height;
  
  //Normal Constructor
  Rectangle(int w, int h) 
  {
     width = w; 
     height = h;    
  }
  
  //Copy Constructor
  Rectangle(Rectangle &r)
  {
    width = r.width;   
    height = r.height;
  } 
};

int main() 
{
  // Create object using Normal Constructor
  Rectangle r1(10, 15); 
    
  // Create object using Copy Constructor
  Rectangle r2(r1);
  
  std::cout << r2.width << " " << r2.height<<std::endl;
  return 0;
}