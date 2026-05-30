/* 28. Write a java program which implements Multiple Interfaces.  */
interface superInter{
    void printMessage();
}
interface subInter{
    void printMessageOfSub();
}
class Base implements superInter,subInter{
    public void printMessage()
    {
        System.out.println("hello I am super interface method.");
    }
    public void printMessageOfSub()
    {
        System.out.println("hello I am sub interface method.");
    }
}
class practical28 {
    public static void main(String[] args) {
        Base b1=new Base();
        b1.printMessage();
        b1.printMessageOfSub();
    }
}
