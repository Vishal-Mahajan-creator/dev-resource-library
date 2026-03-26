import java.util.Scanner;

public class Method4_userInput_Even 
{
    static void method1()
    {
        Scanner obj = new Scanner(System.in);
        int no1, no2;
        System.out.println("To check number even or odd enter rage.");
        System.out.println("Enter Start number:-");
        no1 = obj.nextInt();
        System.out.println("Enter End number:-");
        no2 = obj.nextInt();

        for (int i = no1; i <= no2; i++) {
            if (i % 2 == 0) {
                System.out.println("Even no is:-" + i);
            }

            else {
                System.out.println("Odd no is:-" + i);
            }
        }

    }

    public static void main(String[] args) 
    {
        method1();
    }
    
}
