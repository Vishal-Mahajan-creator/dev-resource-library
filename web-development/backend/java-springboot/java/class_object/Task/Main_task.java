public class Main_task 
{
    public static void main(String[] args) 
    {
        Emp a=new Emp();
        a.get_emp_data();
        a.show_emp_data();

        Stud b = new Stud();
        b.get_std_data();
        b.show_std_data();

        Car c=new Car();
        c.get_car_data();
        c.show_car_data();
        
        Department d=new Department();
        d.get_dep_data();
        d.show_dep_data();
    }
}
