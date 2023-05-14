/*Write a java program which shows the use of Static Members.*/
class staticmember{
    public static int count;
    public void CountNumber(){
        count++;
    }
}
class practial15 {
    public static void main(String[] args) {
        staticmember s1=new staticmember();
        staticmember s2=new staticmember();
        staticmember s3=new staticmember();
        s1.CountNumber();
        s2.CountNumber();
        s3.CountNumber();
        System.out.println(s1.count);            
        System.out.println(s2.count);            
        System.out.println(s3.count);            
    }
}
