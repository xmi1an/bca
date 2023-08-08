/* 24. Write a java program which shows the Method Overriding. */

class Base{
    void printMessage()
    {
        System.out.println("I am Base class method who's class is final."+"\n");
    }
}
// That Base class is can't Extends or Inherit by Derive class Because it is declare by final.
class Derive{
    final int sum(int a,int b)
     {
        return a+b;
     }
}
class Derive1 extends Derive{
   /*  int sum(int x,int y)
    {   
        System.out.println("Final method Of derive 1 class.");
        return y+x;
    } */ /*That is not possible Because Derive class Method is final*/
}
class practial25{
    public static void main(String[] args) {
      //Derive1 d1=new Derive1();
       // d.sum(1, 2);
    }
}
