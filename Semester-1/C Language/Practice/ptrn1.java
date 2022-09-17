public class ptrn1 {
    public static void main(String[] args) {
        int i, j;
            int space = 0;
            int MAX = 10;

            for (i = MAX; i > 0; i--)
            {
                for (j = 0; j < i; j++)
                {
                    System.out.print("*");
                }
                for (j = 0; j < space; j++)
                {
                    System.out.print(" ");
                }
 
                for (j = 0; j < i; j++)
                {
                    System.out.print("*");
                }
 
                System.out.print("\n");
                space += 2;
            }
    }

}
