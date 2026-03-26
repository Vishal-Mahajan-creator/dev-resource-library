
import java.util.Scanner;

public class Method2_user_input
{
    static void method1(String name,int age)
    {
        System.out.println(name + " is " + age + " year old.");

    }
    static void method2(String name1,int age1)
    {
        System.out.println(name1 + " is " + age1 + " year old.");

    }   
    static void method3(String name2,int age2)
    {
        System.out.println(name2 + " is " + age2 + " year old.");

    }

    public static void main(String[] args) 
    {
        Scanner obj = new Scanner(System.in);

        System.out.println("Enter name for 1:-");
        String name =obj.nextLine();
        System.out.println("Enter age for 1:-");
        int age = obj.nextInt();
        method1(name, age);

        name = obj.nextLine();
        System.out.println();
        System.out.println("Enter name for 2:-");
        String name1 =obj.nextLine();
        System.out.println("Enter age for 2:-");
        int age1 = obj.nextInt();
        method2(name1, age1);

        name1 = obj.nextLine();
        System.err.println();
        System.out.println("Enter name for 3:-");
        String name2 =obj.nextLine();
        System.out.println("Enter age for 3:-");
        int age2 = obj.nextInt();
        method3(name2, age2);
    }
}
