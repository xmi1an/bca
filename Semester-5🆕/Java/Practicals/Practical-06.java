/* 6. Write a Java Program to find the sum of the digits of given number. */
//Write a Java Program to find the sum of the digits of given number. 
import java.util.Scanner;
class practial6{
    public static void main(String[] args){
        int a,sum=0,r;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a 1st number: ");
        a=sc.nextInt();
        while(a>0)
        {
            r=a%10;
            sum=sum+r;
            a=a/10;
        }
        System.out.println("sum="+sum);
        sc.close();
    }
}
