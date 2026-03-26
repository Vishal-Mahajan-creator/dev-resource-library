class Employee 
{
    int salary=200010;
}
class Employee_bonous extends Employee
{
 
        int bonous=10000;
 
}
public class Single_inheritance 
{
    public static void main(String[] args) 
    {
        Employee_bonous obj1   = new Employee_bonous();
        System.out.println("The salary of employee is:-" + obj1.salary);
        System.out.println("\nThe bonous of employee is:-" + obj1.bonous);
        System.out.println("\nThe final salary of employee is:-" + (obj1.salary+obj1.bonous));
    }
}
