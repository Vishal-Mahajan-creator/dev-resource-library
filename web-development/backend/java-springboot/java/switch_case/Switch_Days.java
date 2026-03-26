
import java.util.Scanner;

public class Switch_Days 
{
    public static void main(String[] args) 
    {
        int no;
        System.out.println("Enter number between 1 to 7(To find the day):-");
        Scanner sc = new Scanner(System.in);
        no = sc.nextInt();
        switch (no) {
            case 1:
                System.out.println("Sunday");
                break;
            case 2:
                System.out.println("Monday");
                break;
            case 3:
                System.out.println("Tuesday");
                break;
            case 4:
                System.out.println("Wenusday");
                break;
            case 5:
                System.out.println("Thuesday");
                break;
            case 6:
                System.out.println("Friday");
                break;
            case 7:
                System.out.println("Saturady");
                break;

            default:
                System.out.println("Enter valid number");
        }
        
    }
}
