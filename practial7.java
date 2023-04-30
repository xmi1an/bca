//Write a Java Program that will display the Sum of 1+1/2+1/3.....+1/n.
import java.util.Scanner;
class practial7{
    public static void main(String[] args) {
     float i,n;double sum=0;
     System.out.println("Enter a number: ");
     Scanner s= new Scanner(System.in);
     n=s.nextFloat();
     for(i=1;i<=n;i++)
     {
        sum=sum+1.0/i;
     }
     System.out.println("sum of series is "+ sum);
    }
}