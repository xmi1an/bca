/* 18. Write a java program which implements the Default Constructors */
class Check{
    public Check(){
        System.out.println("Hello! I Am Default Constructer...");
    }

    public void close() {
    }
}
class practial18{
    public static void main(String[] args) {
        Check C= new Check();
        C.close();
    }
}
