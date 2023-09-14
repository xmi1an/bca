/*  33. Write a Java Program to implement the methods of Stack Class. */
import java.util.Collection;
import java.util.Stack;
public class practical33 {
    public static void main(String[] args) {
        Stack<Integer> s1=new Stack<Integer>();
        s1.push(2);
        s1.push(3);
        s1.push(4);
        s1.push(5);
        System.out.println(s1);
        s1.pop();
        s1.pop();
        System.out.println(s1);
    }
}
