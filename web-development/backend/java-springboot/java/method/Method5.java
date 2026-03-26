import java.util.Scanner;

public class Method5 
{
    static void method1()
    {
        String name, field;
        int roll_no;
        Scanner obj = new Scanner(System.in);
        System.out.println("Enter name:-");
        name = obj.nextLine();
        
        System.out.println("\nEnter Roll number:-");
        roll_no = obj.nextInt();
        obj.nextLine();

        System.out.println("\nEnter Filed:-");  
        field = obj.nextLine();
         
        System.out.println(name+"  Roll no. is:-"+roll_no+" & Course is "+field);

    }
    public static void main(String[] args) 
    {
        for (int i = 0; i < 2; i++) 
        {
            method1();
        }
    }
}
