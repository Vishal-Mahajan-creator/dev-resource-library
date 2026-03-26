
import java.util.Scanner;

class COEP
{
    String collage_name="RMC collage";
    int collage_id=2122;
    String addres="Akurdi";
    
    class Computer_Science
    {
        int CS_std_id;
        String CS_std_name;
        long CS_std_phone_no;

        void  get_data()
        {
            System.out.println("======Computer Science======");
            System.out.println("Enter following information");
            Scanner s=new Scanner(System.in);
            System.out.println("Enter your name:-");
            CS_std_name=s.nextLine();
            System.out.println("Enter your ID:-");
            CS_std_id=s.nextInt();
            System.out.println("Enter your phone no.:-");
            CS_std_phone_no=s.nextLong();
        }
        void show_data()
        {
            System.out.println("\nYour name is:-"+CS_std_name);
            System.out.println("Your ID is:-"+CS_std_id);
            System.out.println("Collage name is:-"+collage_name);
            System.out.println("Collage ID is:-"+collage_id);
            System.out.println("Collage Addres is:-"+addres);
            System.out.println("Your phone no:-"+CS_std_phone_no);

        }
    }
    class Machanical
    {
        int M_std_id;
        String M_std_name;
        long M_phone_no;

        void  get_data()
        {
            System.out.println("\n\n======Machanical======");
            System.out.println("Enter following information");
            Scanner s=new Scanner(System.in);
            System.out.println("Enter your name:-");
            M_std_name=s.nextLine();
            System.out.println("Enter your ID:-");
            M_std_id=s.nextInt();
            System.out.println("Enter your phone no.:-");
            M_phone_no=s.nextLong();

        }
        void show_data()
        {
            System.out.println("\nYour name is:-"+M_std_name);
            System.out.println("Your ID is:-"+M_std_id);
            System.out.println("Collage name is:-"+collage_name);
            System.out.println("Collage ID is:-"+collage_id);
            System.out.println("Collage Addres is:-"+addres);
            System.out.println("Your phone no:-"+M_phone_no);

        }
    }
    class Civil
    {
        int C_std_id;
        String C_std_name;
        long   C_phone_no;

        void  get_data()
        {
            System.out.println("\n\n======Civil======");
            System.out.println("Enter following information");
            Scanner s=new Scanner(System.in);
            System.out.println("Enter your name:-");
            C_std_name=s.nextLine();
            System.out.println("Enter your ID:-");
            C_std_id=s.nextInt();
            System.out.println("Enter your phone no.:-");
            C_phone_no=s.nextLong();

        }
        void show_data()
        {
            System.out.println("\nYour name is:-"+C_std_name);
            System.out.println("Your ID is:-"+C_std_name);
            System.out.println("Collage name is:-"+collage_name);
            System.out.println("Collage ID is:-"+collage_id);
            System.out.println("Collage Addres is:-"+addres);
            System.out.println("Your phone no:-"+C_phone_no);

        }
    }
}

public class SPPU 
{
    public static void main(String[] args) 
    {
        COEP obj=new COEP();
        COEP.Computer_Science obj1=obj.new Computer_Science();
        obj1.get_data();
        obj1.show_data();

        COEP.Machanical obj2=obj.new Machanical();
        obj2.get_data();
        obj2.show_data(); 

        COEP.Civil obj3=obj.new Civil();
        obj3.get_data();
        obj3.show_data();

    }
}
