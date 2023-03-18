
#include<stdio.h>  // header file

int main(){  //function start

  char* str;  //declare string pointer
  int len=0;  //declare length
 
  printf("Enter the string:");  //Inputiing the string
  scanf("%s",str);  //scanning the string
  
  while(*str){  //will run till last character of string
    len++;  //incrementing length
    str++;  //incrementing pointer
  }
  printf("Length of the string is %d\n",len);  //printing length
  return 0;  //ending main function
}