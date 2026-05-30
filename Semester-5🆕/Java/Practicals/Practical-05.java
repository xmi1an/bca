/* 5. Write a Java Program that shows the use of switch Statement. */

import java.util.Scanner;
class practial5{
    public static void main(String[] args) {
        int choice,a,b,c;
        Scanner obj=new Scanner(System.in);
        System.out.println("Enter 1st number: ");
        a=obj.nextInt();
        System.out.println("Enter 2nd number: ");
        b=obj.nextInt();
         System.out.println("1.addition");
         System.out.println("2.subtraction");
         System.out.println("3.multiplaction");
         System.out.println("4.division");
         System.out.println("5.modulo");
         Scanner s=new Scanner(System.in);
         choice=s.nextInt();
         switch (choice) {
            case 1:c=a+b;
                   System.out.println(a+"+"+b+"="+c);
                   break;
            case 2:c=a-b;
                   System.out.println(a+"-"+b+"="+c);
                   break; 
            case 3:c=a*b;
                   System.out.println(a+"*"+b+"="+c);
                   break;
            case 4:c=a/b;
                   System.out.println(a+"/"+b+"="+c);
                   break;
            case 5:c=a%b;
                   System.out.println(a+"%"+b+"="+c);
                   break;
            default:System.out.println("INVALID CHOICE");
                break;
            }
            s.close(); obj.close();
        }
}
