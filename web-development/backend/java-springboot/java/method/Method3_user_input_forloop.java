import java.util.Scanner;
public class Method3_user_input_forloop {
    


    static void method1(int a )
    {
        Scanner obj = new Scanner(System.in);
        String name;
        int age;
       
        System.out.println("Enter name for " + a + ":-");
        name = obj.nextLine();
        System.out.println("Enter age " + a + ":-");
        age = obj.nextInt();

        System.out.println(name + " is " + age + " year old.");
    }

    public static void main(String[] args) 
    {
       for(int i=1;i<=5;i++)
       {
        method1(i);
       }
       
    }
}

    
