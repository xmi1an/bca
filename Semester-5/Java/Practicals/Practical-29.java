/* 29. Write a java program which shows importing of classes from other packages.  */
import java.lang.Math;
import java.util.Scanner;
public class practial29 {
    public static void main(String[] args) {
        System.out.println("Enter a Numeber: ");
        Scanner sc=new Scanner(System.in);
        float a=sc.nextFloat();
        System.out.println(Math.sqrt(a));
    }
}
