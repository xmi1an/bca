//Write a java program which shows the use of Methods Overloading. 

class practial17 {
 public int add(int a,int b,int c){
    return a+b+c;
 }   
 public int add(int a,int b){
    return a+b;
 }
 public String add(String a,String b){
    return a+b;
 }
 public static void main(String[] args) {
    practial17 P1=new practial17();
    int x,y;
    x=P1.add(1, 2);
    y=P1.add(1, 2, 3);
    String c=P1.add("mihir ", "patel");
    System.out.println("ADD OF THREE NUMBER IS "+y);
    System.out.println("ADD OF TWO NUMBER IS "+x);
    System.out.println("ADD OF TWO STRING IS "+c);
 }
}