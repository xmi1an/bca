/* 19.Write a java program which implements the Parameterized Constructors. */
class Parameter{
    Parameter(int a,int b){
        int c=a+b;
        System.out.println("Sum of two number: "+c);
    }
}
class practial19 {
   public static void main(String[] args) {
    Parameter p1=new Parameter(4,6);
   }
}
