/* 23.Write a java program which explains the concept of Hierarchical Inheritance. */
class Base{
    void printMessage()
    {
        System.out.println("hello ! i am Base class method"+"\n");
    }
}
class Derive1 extends Base{
    void printMessageofDerive1()
    {
        System.out.println("hello! i am Derive 1 class method"+"\n");
    }
}
class Derive2 extends Base{
    void printMessageofDerive2()
    {
        System.out.println("hqllo! i am Derive 2 class method"+"\n");
    }
}
class practial23{
    public static void main(String args[])
    {
      Derive1 d1=new Derive1();
      Derive2 d2=new Derive2();
      d1.printMessage();
      d1.printMessageofDerive1();
      d2.printMessage();
      d2.printMessageofDerive2();
    }  
}
