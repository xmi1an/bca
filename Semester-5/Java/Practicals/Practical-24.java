/* 24.Write a java program which shows the Method Overriding.  */
class Base{
    void Display()
    {
        System.out.println("hello i am base class...."+"\n");
    }
}
class Derive extends Base{
    void Display()
    {
        System.out.println("hello i am derive class...."+"\n");
    }
}
class practial24 {
    public static void main(String[] args) {
        Base b1=new Base();
        b1.Display();
        Base b2=new Derive();
        b2.Display();
    }
}
