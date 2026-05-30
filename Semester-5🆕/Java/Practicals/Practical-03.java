/* 3. Write a Java Program that will find the largest no from the given two nos. */

import java.util.Scanner;
class practial3{
    public static void main(String[] args) {
        int a,b;
        Scanner s=new Scanner(System.in);
        a=s.nextInt();
        b=s.nextInt();
        if(a>b)
        {
            System.out.println(a+"is maximum");
        }else{
            System.out.println(b+"is maximum");
        }
        s.close();
    }
}
