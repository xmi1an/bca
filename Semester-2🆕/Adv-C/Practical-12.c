
#include <stdio.h> 

int main()
{
  /* STRUCTURE within STRUCTURE */

  /* first define the outer structure */
  struct outer_struct { 
      char name[20];
      int age;

      /* now define the inner structure */
      struct inner_struct { 
          int marks;
          char grade; 
      } inner; 
  } outer; 

  /* assign values to outer structure */
  strcpy(outer.name, "John"); 
  outer.age = 20; 
  /* assign values to the inner structure */
  outer.inner.marks = 80; 
  outer.inner.grade = 'A'; 
  
  /* display the structure member values */
  printf("name: %s\n", outer.name); 
  printf("age: %d\n", outer.age); 
  printf("marks: %d\n", outer.inner.marks); 
  printf("grade: %c\n", outer.inner.grade); 

  return 0;
}