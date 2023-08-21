//. Write a java program which implements the Overloading of Constructors.
class A{
    A(int a)
    {
        System.out.println("Circle");
    }
    A(int a,int b)
    {
        System.out.println("Line");
    }
    A(int a,int b,int c)
    {
        System.out.println("Triangle");
    }
    A(int a,int b,int c,int d)
    {
        System.out.println("Square");
    }
}
class practial20 {
    public static void main(String[] args) {
        A a=new A(1);  
        A b=new A(1,1);  
        A c=new A(1,1,1);  
        A d=new A(1,1,1,1);  
    }
}
