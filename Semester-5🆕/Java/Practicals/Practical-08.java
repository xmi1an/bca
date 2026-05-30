/* 8. Write a Java Program that check weather the given no is prime or not. */

import java.util.Scanner;
class practial8{
    public static void main(String[] args){
        int n,i,count=0;
        System.out.println("Enter a number: ");
        Scanner s=new Scanner(System.in);
        n=s.nextInt();
        for(i=1;i<=n;i++)
        {
         if(n%i==0)
         {
            count++;
         }
        }
        if(count==2)
        {
            System.out.println(n+" is prime number");
        }
        else{
            System.out.println(n+" is not prime number");
        }
    }
}
