class Employee 
{ float salary1=50000;
    void m1()
    {
         int salary = 200010;
         System.out.println("The salary of employee is:-"+salary);
    }
}
 class Employee_bonous extends Employee
{ float bonous1= 10000;
    void m2()
    {
         int bonous = 10000;
        System.out.println("\nThe bonous of employee is:-"+bonous);
    }
}
public class Single_inheritance1 
{
    public static void main(String[] args) 
    {
        Employee_bonous obj1   = new Employee_bonous();
        obj1.m1();
        obj1.m2();
        System.out.println("total:-"+(obj1.salary1+obj1.bonous1));
    }
}