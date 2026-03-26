public class Pattern2 
{
    public static void main(String[] args) 
    {
        int i, j;
        for (i = 1; i <= 5; i++) {
            for (j = 1; j <= i; j++) {
                System.out.print(" " + "*");
            }
            System.out.println();
        }
        System.out.println("\n\n");

        for (i = 1; i <= 6; i++) 
        {
            for (j = 0; j < i; j++) {
                System.out.print(" ");
            }

            // Print stars
            for (j = 0; j < 6 - i; j++) {

                System.out.print("*");

            }
            System.out.println();
        }
        System.out.println("\n\n");

        int n = 5;
        for (i = 1; i <= 5; i++) 
         {
            for (j = 1; j <= 5; j++) 
            {
                System.out.print(n);
            }
            n--;
            System.out.println();
        }
        System.out.println("\n\n");
    }
}