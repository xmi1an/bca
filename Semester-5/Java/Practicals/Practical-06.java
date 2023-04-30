/* 6. Write a Java Program to find the sum of the digits of given number. */

import java.util.Scanner;
class practial6{
    public static void main(String[] args){
        int a,b;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a 1st number: ");
        a=sc.nextInt();
        System.out.println("Enter a 2nd number: ");
        b=sc.nextInt();
        int c=a+b;
        System.out.println("sum="+c);
        sc.close();
    }
}
