/* 2. Write a Java Program that will display factorial of the given number. */

import java.util.Scanner;
class practial2{
 public static void main(String[] args) {
    int n,sum=1,i;
    System.out.println("Enter a number: ");
    Scanner obj = new Scanner(System.in);
        n=obj.nextInt();
        for(i=1;i<=n;i++)
        {
            sum=sum*i;
        }
        System.out.println("Factorial of "+n +" is "+sum);
        obj.close();
 }
}
