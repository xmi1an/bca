/* 21.Write a java program which explains the concept of Single Inheritance. */
class Base{
    int a=2,b=3;
    public void add(){
        System.out.println("SUM OF "+a+"+"+b+"="+(a+b));
    }
}
class Derive extends Base
{
  int p=10,q=10;
  public void mul(){
    System.out.println("MULTIPLATION OF "+p+"*"+q+"="+(p*q));
  }
}
class practial21{
    public static void main(String[] args) {
        Derive d=new Derive();
        d.mul();
        d.add();
    }
}
