/* 26. Write a Java Program to implement abstract class and abstract method.  */
 abstract class Base{
    abstract void printMessage();
    void Display()
    {
        System.out.println("this is Base class method."+"\n");
    }
}
class Derive extends Base{
    String name;
    int roll_no;
    Derive(int roll_no,String name)
    {
      this.roll_no=roll_no;
      this.name=name;
    }
    void printMessage()
    {
        System.out.println("ROLL NO = "+roll_no);
        System.out.println("NAME = "+name);
    }
}
class practial26{
    public static void main(String[] args) {
        Derive d1=new Derive(1,"mihir");
        d1.printMessage();
        d1.Display();
       // Base b1=new Base(); this is not possible.
    }
}
