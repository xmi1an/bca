//Write a Java Program that will accept Command-line Arguments and display the same.
class practial11{
  public static void main(String[] args) {
    System.out.println("command line argument is: ");
    for(int i=0;i<args.length;i++)
    {
        System.out.println(args[i]);
    }
  }
}