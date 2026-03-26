import java.util.Scanner;
public class Stud 
{
    String std_name;
    float std_batch_no;
    double std_ph_no;

    public void get_std_data()
    {
        System.out.println("\n\nEnter your name:-");
        Scanner sc = new Scanner(System.in);
        std_name = sc.nextLine();
        System.out.println("Enter your batch no.:-");
        std_batch_no = sc.nextFloat();
        System.out.println("Enter your phone no.:-");
        std_ph_no = sc.nextDouble();
    }
    public void show_std_data()
    {
        System.out.println("Student name is:-" + std_name);
        System.out.println("Student batch number is:-" + std_batch_no);
        System.out.println("Student phone number is:-" + std_ph_no);
    }

}

