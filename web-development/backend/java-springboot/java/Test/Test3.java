
import java.util.Scanner;



class Bank
{
    String bank_name="HDFC",
    IFSC_code="HDFC2121",
    bank_addres="Somatne";
    int bank_id=6573;

    void bank_show()
    {
    System.out.println("===Bank Details===");
    System.out.println("Bank name:-"+bank_name);
    System.out.println("Bank ID:-"+bank_id);
    System.out.println("Bank IFSC code:-"+IFSC_code);
    System.out.println("Bank addres:-"+bank_addres);
    }
}

class User extends Bank
{
    String user_name="Vishal",ac_no="10009234456767";
    long Ac_balance=1000000;

    void user_show()
    {
    System.out.println("\n\n===User Details===");
    System.out.println("User name:-"+user_name);
    System.out.println("User A/C no.:-"+ac_no);
    System.out.println("Bank name:-"+bank_name);
    System.out.println("User A/C balance:-"+Ac_balance);
    }

    void withdraw()
    {
        long Total_balance,withdraw_amt;
        System.out.println("\n\nEnter amout for withdraw:-");
        Scanner sc=new Scanner(System.in);
        withdraw_amt=sc.nextLong();
        Total_balance=Ac_balance-withdraw_amt;
        Ac_balance=Total_balance;
        System.out.println("Total balance:-"+Total_balance);
        System.out.println("Remaining balance:-"+Ac_balance);

    }
    
}
public class Test3 
{
    public static void main(String[] args) 
    {
        User u1=new  User();
        u1.bank_show();
        u1.user_show();
        u1.withdraw();
        
    }
}
