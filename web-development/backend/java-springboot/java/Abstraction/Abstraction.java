
//hyrachical inheritance abstraction

import java.util.Scanner;

abstract  class RMC_collage
{
    
    int roll_no;
    String name;
    long mobile_no;
    String addres;

    Scanner obj=new Scanner(System.in);
    abstract void Set_std_data();
    abstract  void show_std_data();

}
class BCA_commerce extends RMC_collage
{
    void bca_commere()
    {
        System.out.println("\n\nThis is BCA Commerce department");
    }
     void Set_std_data()
    {
       
        System.out.println("\n====Enter your details====");
        System.out.println("Enter your Roll no:-");
        roll_no=obj.nextInt();
        obj.nextLine();
        System.out.println("Enter your name:-");
        name=obj.nextLine();
        System.out.println("Enter your Mobile no:-");
        mobile_no=obj.nextLong();
        obj.nextLine();
        System.out.println("Enter your addres:-");
        addres=obj.nextLine();
    }
     void show_std_data()
    {
        System.out.println("\n====Your details====");
        System.out.println("Your Roll no:-"+roll_no);
         System.out.println("Your name:-"+name);
        System.out.println("Your Mobile no:-"+mobile_no);
        System.out.println("Your addres:-"+addres);
    }

}
class BCA_scince extends RMC_collage
{
    void bca_science()
    {
        System.out.println("\n\nThis is BCA Science department");
    }
    void Set_std_data()
    {
       
        System.out.println("\n====Enter your details====");
        System.out.println("Enter your Roll no:-");
        roll_no=obj.nextInt();
        obj.nextLine();
        System.out.println("Enter your name:-");
        name=obj.nextLine();
        System.out.println("Enter your Mobile no:-");
        mobile_no=obj.nextLong();
        obj.nextLine();
        System.out.println("Enter your addres:-");
        addres=obj.nextLine();
    }
     void show_std_data()
    {
        System.out.println("\n====Your details====");
        System.out.println("Your Roll no:-"+roll_no);
         System.out.println("Your name:-"+name);
        System.out.println("Your Mobile no:-"+mobile_no);
        System.out.println("Your addres:-"+addres);
    }
}

class Civil extends RMC_collage
{
    void civil()
    {
        System.out.println("\n\nThis is Civil department");
    }
    void Set_std_data()
    {
       
        System.out.println("\n====Enter your details====");
        System.out.println("Enter your Roll no:-");
        roll_no=obj.nextInt();
        obj.nextLine();
        System.out.println("Enter your name:-");
        name=obj.nextLine();
        System.out.println("Enter your Mobile no:-");
        mobile_no=obj.nextLong();
        obj.nextLine();
        System.out.println("Enter your addres:-");
        addres=obj.nextLine();
    }
     void show_std_data()
    {
        System.out.println("\n====Your details====");
        System.out.println("Your Roll no:-"+roll_no);
         System.out.println("Your name:-"+name);
        System.out.println("Your Mobile no:-"+mobile_no);
        System.out.println("Your addres:-"+addres);
    }
}

public class Abstraction 
{
    
    public static void main(String[] args) 
    {
        BCA_commerce a1=new BCA_commerce();
        a1.bca_commere();
        a1.Set_std_data();
        a1.show_std_data();

        BCA_scince b1=new BCA_scince();
        b1.bca_science();
        b1.Set_std_data();
        b1.show_std_data();

        Civil c1=new Civil();
        c1.civil();
        c1.Set_std_data();
        c1.show_std_data();
        
    }
}
    
