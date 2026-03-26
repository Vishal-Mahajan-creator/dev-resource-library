
public class Pattern1 {
    public static void main(String[] args) {
        int i, j, row = 5;

        /* OUTPUT:
           *****
           *****
           *****
           *****
           *****
        */
        for (i = 1; i <= row; i++) {
            for (j = 1; j <= row; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
        System.out.println("\n\n");

        /* OUTPUT:
           *
           **
           ***
           ****
           *****
        */
        for (i = 1; i <= row; i++) {
            for (j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
        System.out.println("\n\n");

        /* OUTPUT:
           1  0  0  0  0
           0  1  0  0  0
           0  0  1  0  0
           0  0  0  1  0
           0  0  0  0  1
        */
        for (int k = 1; k <= row; k++) {
            for (int l = 1; l <= row; l++) {
                if (k == l) {
                    System.out.print(" 1 ");
                } else {
                    System.out.print(" 0 ");
                }
            }
            System.out.println();
        }
        System.out.println("\n\n");

        /* OUTPUT:
           @@@@@
           @   @
           @@@@@
           @   @
           @   @
        */
        for (int m = 1; m <= row; m++) {
            for (int n = 1; n <= row; n++) {
                if (m == 1 || m == 3 || n == 1 || n == 5) {
                    System.out.print("@");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        System.out.println("\n\n");

        /* OUTPUT: VISHAL in capital letters using @       
			@       @  @@@@@  @@@@@  @   @  @@@@@  @
 			 @     @     @    @      @   @  @   @  @
  			  @   @      @    @@@@@  @@@@@  @@@@@  @
 			   @ @       @        @  @   @  @   @  @    
  			    @      @@@@@  @@@@@  @   @  @   @  @@@@@
        */
        for (i = 1; i <= row; i++) {
            // V
            for (j = 1; j <= 2 * 5 - 1; j++) {
				if (j == i || j == 2 * 5 - i) 
				{
                    System.out.print("@");
                } else {
                    System.out.print(" ");
                }
            }

            System.out.print("  ");

            // I
            for (j = 1; j <= row; j++) {
                if (i == 1 || i == row || j == (row + 1) / 2) {
                    System.out.print("@");
                } else {
                    System.out.print(" ");
                }
            }

            System.out.print("  ");

            // S
            for (j = 1; j <= row; j++) {
                if (i == 1 || i == 3 || i == 5 || (i == 2 && j == 1) || (i == 4 && j == row)) {
                    System.out.print("@");
                } else {
                    System.out.print(" ");
                }
            }

            System.out.print("  ");

            // H
            for (j = 1; j <= row; j++) {
                if (j == 1 || j == row || i == (row + 1) / 2) {
                    System.out.print("@");
                } else {
                    System.out.print(" ");
                }
            }

            System.out.print("  ");

            // A
            for (j = 1; j <= row; j++) {
                if (((j == 1 || j == row) && i != 1) || i == 1 || i == (row + 1) / 2) {
                    System.out.print("@");
                } else {
                    System.out.print(" ");
                }
            }

            System.out.print("  ");

            // L
            for (j = 1; j <= row; j++) {
                if (j == 1 || i == row) {
                    System.out.print("@");
                } else {
                    System.out.print(" ");
                }
            }

            System.out.println();
        }
    }
}
