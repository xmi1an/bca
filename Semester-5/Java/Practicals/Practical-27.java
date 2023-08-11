/* 27. Write a java program which implements Interface.  */
interface Area{
    final float PI=3.14f;
    float findArea(int x);
}
class Circle implements Area{
    float findArea(int x)
    {
       return (PI*x*x);
    }
}
class Square implements Area{
    float findArea(int x)
    {
        return x*x;
    }
}
class practial27{
    public static void main(String[] args) {
        Circle c=new Circle();
        System.out.println(c.findArea(10));
        Square s=new Square();
        System.out.println(s.findArea(10));
    }
}
