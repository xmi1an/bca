/* 1. Write a Java Program find the area of circle. */

import java.util.*;
class practial1{
    public static void main(String[] args){
        System.out.println("Enter a radius: ");
        Scanner sc=new Scanner(System.in);
        float radius=sc.nextFloat(),area=0;
        area=(22/7)*radius*radius;
        System.out.println("AREA OF A CIRCLE IS: "+area);
        sc.close();
    }
}
