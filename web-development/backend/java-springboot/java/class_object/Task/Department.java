import java.util.Scanner;
public class Department 
{
    String dep_name;
    String dep_manager;
    int dep_no_of_emp;

    public void get_dep_data()
    {
        System.out.println("\n\nEnter your department name:-");
        Scanner sc = new Scanner(System.in);
        dep_name = sc.nextLine();
        System.out.println("Enter manager name:-");
        dep_manager = sc.nextLine();
        System.out.println("Enter Number of employees in department:-");
        dep_no_of_emp = sc.nextInt();
    }
    public void show_dep_data()
    {
        System.out.println("Your department name is:-" + dep_name);
        System.out.println("Manager name is:-"+dep_manager);
        System.out.println("Number of employees in department is:-" + dep_no_of_emp);
    }
}
