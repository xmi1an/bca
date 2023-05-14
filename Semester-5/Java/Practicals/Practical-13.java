/* 13. Write a Java Program to create a Student class and generate result of student (Total, Per, */
import java.util.Scanner;
class Student{
    int roll_no;
    String name;
    int marks1,marks2,marks3;
    public void getDetails(){
        System.out.println("Enter a rollno: ");
        Scanner sc=new Scanner(System.in);
        roll_no=sc.nextInt();
        System.out.println("Enter a name: ");
        name=sc.next();
        System.out.println("Enter a 1st subject marks: ");
        marks1=sc.nextInt();
        System.out.println("Enter a 2nd subject marks: ");
        marks2=sc.nextInt();
        System.out.println("Enter a 3rd subject marks: ");
        marks3=sc.nextInt();
        sc.close();
    }
    public int Total(){
        int total=(marks1+marks2+marks3);
        return total;
    }
    public float Percentage(){
        float percentage=Total()/3;
        return percentage;
    }
    public String Grade(){
        float f=Percentage();
        if(f>=90)
           return "A";
        else if(f>=80)
           return "B";
        else if(f>=35)
           return "C";
        else
        return "D";        
    }
    public void printDetails(){
         System.out.println("MARKSHEET DETALIS");
         System.out.println("ROLL NO="+roll_no);
         System.out.println("NAME="+name);
         System.out.println("TOTAL="+Total());
         System.out.println("PERCENTAGE="+Percentage());
         System.out.println("GRADE="+Grade());
    }
}
class practial13{
    public static void main(String[] args) {
        Student s1=new Student();
        s1.getDetails();
        s1.Total();
        s1.Percentage();
        s1.Grade();
        s1.printDetails();
    }
}
