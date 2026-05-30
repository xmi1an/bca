//Write a Java Program to create an Employee class and generate Salary Slip for the employee. 
import java.util.Scanner;
class Employee{
    int E_Id;
    String E_Name;
    int Salary;
    int Month;
    int Present_Day;
    float Gross_Salary;
    int House_Rent;
    int Medical_Allowance;
    float Net_Salary;
    public void GetDetails(){
      System.out.println("Enter Employee ID:");
      Scanner sc=new Scanner(System.in);
      E_Id=sc.nextInt();
      System.out.println("Enter Employee Name:");
      E_Name=sc.next();
      System.out.println("Enter a Employee Salary");
      Salary=sc.nextInt();
      System.out.println("Enter a Present_Day");
      Present_Day=sc.nextInt();
      System.out.println("Enter a month");
      Month=sc.nextInt();
      sc.close();
    }
    public int MonthDay(){
     
        switch (Month) {
            case 1:return 31;
            case 2:return 28;
            case 3:return 31;
            case 4:return 30;
            case 5:return 31;
            case 6:return 30;
            case 7:return 31;
            case 8:return 31;
            case 9:return 30;
            case 10:return 31;
            case 11:return 30;
            case 12:return 31;
            default:System.out.println("INVALID CHOICE");
        }
        return 0;
    }
    public float GrossSalary(){
        float G;
        G=Salary/MonthDay();
        return Present_Day*G;        
    }
    public int HouseRent(){
        if(GrossSalary()>100000){
            return 5000;
        }else
        return 0;
    }
    public int MedicalAllowance(){
        if(GrossSalary()>100000)
        return 4000;
        else
        return 0;
    }
    public float NetSalary(){
        float Total_Salary;
        Total_Salary=GrossSalary()+HouseRent()+MedicalAllowance();    
        return Total_Salary;
    }
    public void ShowDetails(){
        System.out.println("Employee Id :"+E_Id);
        System.out.println("Employee Name: "+E_Name);
        System.out.println("Month: "+Month);
        System.out.println("Gross Salary: "+GrossSalary());
        System.out.println("House rent: "+HouseRent());
        System.out.println("Medical Allowance: "+MedicalAllowance());
        System.out.println("Net Salary: "+NetSalary());
    }
}
class practial14{
    public static void main(String[] args) {
        Employee E1=new Employee();
        E1.GetDetails();
        E1.ShowDetails();
    }
}
