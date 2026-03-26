
import java.util.Scanner;

public class Emp
{
    String emp_name;
    float emp_sal;
    String emp_join_date;

    public void get_emp_data()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter employee name:-");
        emp_name = sc.nextLine();
        System.out.println("Enter your Salary:-");
        emp_sal = sc.nextFloat();
        sc.nextLine();
        System.out.println("Enter your joining date:-");
        emp_join_date = sc.nextLine();
    }
    public void show_emp_data()
    {
       System.out.println("Employee name is:-" + emp_name);
       System.out.println("Employee Salary is:-" + emp_sal);
       System.out.println("Employee joining date is:-" + emp_join_date);

    }

}
