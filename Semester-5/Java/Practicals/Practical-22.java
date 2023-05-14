/* 22.Write a java program which explains the concept of Multilevel Inheritance. */
class Base{
    int a=10,b=10;
    public void add(){
        System.out.println("add="+(a+b));
    }
}
class Derive1 extends Base
{
    int p=10,q=5;
    public void mul(){
        System.out.println("mul="+(p*q));
    }
}
class Derive2 extends Derive1
{
    public void Message(){
        System.out.println("Hello! I am hear....");
    }
}
class practial22{
    public static void main(String[] args) {
        Derive2 d=new  Derive2();
        d.Message();
        d.add();
        d.mul();
    }
}
