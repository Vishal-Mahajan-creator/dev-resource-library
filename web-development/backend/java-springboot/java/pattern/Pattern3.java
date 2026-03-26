public class Pattern3 
 {
    
     public static void main(String[] args) 
      {
         int i = 6;
         while (i >= 1) {
             int j = 1;
             while (j <= 5) {
                 System.out.print(i);
                 j++;
             }
             System.out.println();
             i--;
         }
     
        System.out.println("\n\n");
        for ( i = 6; i >= 1; i--)
         {
            System.out.println(String.valueOf(i).repeat(5));
        }
    }
}



