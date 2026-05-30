/* 4. Write a Java Program that will find the largest no from the given three nos. */

import java.util.Scanner;
class practial4{
   public static void main(String[] args) {
    int a,b,c;
    System.out.println("Enter 1st number: ");
    Scanner s=new Scanner(System.in);
    a=s.nextInt();
    System.out.println("Enter 2nd number: ");
    b=s.nextInt();
    System.out.println("Enter 3rd number: ");
    c=s.nextInt();
    if(a>b && a>c)
    {
     System.out.println(a+" is miaximum");
    }
    else if(b>a && b>c)
    {
     System.out.println(b+" is miximum");
    }
    else
    {
        System.out.println(c+" is miximum");
    }
    s.close();
   }
}
