import java.util.Scanner;
public class Car 
{

    String car_model;
    float car_year;
    String car_owner;

    public void get_car_data()
    {
        System.out.println("\n\nEnter your car model name:-");
        Scanner sc = new Scanner(System.in);
        car_model = sc.nextLine();
        System.out.println("Enter your car year:-");
        car_year = sc.nextFloat();
        sc.nextLine();
        System.out.println("Enter car owner name:-");
        car_owner = sc.nextLine();
    }
    public void show_car_data()
    {
        System.out.println("Car model name is:-" + car_model);
        System.out.println("Car year is:-"+car_year);
        System.out.println("Car owner name is:-"+car_owner);
    }

}

