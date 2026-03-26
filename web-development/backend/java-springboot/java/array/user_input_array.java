
import java.util.Scanner;

public class user_input_array {
    public static void main(String[] args) 
     {
        int id[] = new int[6];
        System.out.println("Enter upto 6 ID");
        Scanner obj = new Scanner(System.in);
        for (int i = 0; i < id.length; i++) 
        {
            System.out.println("Enter ID:-" );
            id[i] = obj.nextInt();
        }
          for (int i = 0; i < id.length; i++) 
        {
            
            System.out.println("Your ID:-" +id[i]);
        }
    }
}
