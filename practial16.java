//Write a java program which shows the Nesting 
class Example{
    public void HelloWrold(){
       System.out.println("HELLO WORLD");
    }
    public void HelloWorld2(){
       System.out.println("HELLO WORLD2");
       HelloWrold();    
    }
}
class practial16{
    public static void main(String[] args) {
        Example E1=new Example();
        E1.HelloWrold();
        E1.HelloWorld2();
    }
}