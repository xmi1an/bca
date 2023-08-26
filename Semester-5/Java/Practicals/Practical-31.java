/* 31. Write a Java Program to implement the methods of String Class.  */
import java.util.Scanner;
import java.lang.String;
public class practical31 {
    public static void main(String[] args) {
        String str=new String();
        System.out.println("Enter a 1st string: ");
        Scanner sc=new Scanner(System.in);
        str=sc.next();
        String str1=new String();
        System.out.println("Enter a 2nd string: ");
        str1=sc.next();
        System.out.println(str.length());
        System.out.println(str1.length());
        boolean a=str.equals(str1);// Compare two strings.
        System.out.println(a);
        System.out.println(str.toLowerCase()); // Convert to Lower Case.
        System.out.println(str1.toUpperCase());// Convert to Upper Case.
    }
}
