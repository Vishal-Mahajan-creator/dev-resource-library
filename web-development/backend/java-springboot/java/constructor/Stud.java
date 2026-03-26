import java.util.Scanner;
    public class Stud
    {
        String name;
        float roll_no;
        double phone;
        String addres;

        public  Stud()
        {
            System.out.println("This is no argument constructor");
            this.name="Vishal";
            this.roll_no=6171f;
            this.phone=84071234;
            this.addres="Somatne phata,Talegon dabhade 410506";
        }

        public  Stud(String Name,float Roll_no,double Phone,String Addres)
         {
            System.out.println("\n\nThis is argument constructor");
            this.name=Name; 
            this.roll_no=Roll_no; 
            this.phone=Phone; 
            this.addres=Addres; 
         }
         public Stud(double Phone)
         {
            this.name=name;
            this.roll_no=-roll_no;
            this.addres=addres;
            this.phone=Phone;

            System.out.println("\n\nThis constructor accept value from user");

            Scanner sc=new Scanner(System.in);
            System.out.println("\nEnter your name:-");
            name=sc.nextLine();
            
            System.out.println("\nEnter your Roll no.:-");
            roll_no=sc.nextFloat();
            sc.nextLine();

            System.out.println("\nEnter your addres:-");
            addres=sc.nextLine();
         }
         public  void display()
         {
            System.out.println("\nName of student is "+name+" | Roll no. "+roll_no+"| Phone no. "+phone+"| Adress "+addres);
         }

  public static void main(String[] args) 
    {
        Stud obj1=new Stud();
        obj1.display();

        Stud obj2=new Stud("Kaustubh",6178f,928346265,"Chinchwad,pune");
        obj2.display();

        Stud obj3=new Stud(988962867);
        obj3.display();

    }
    }    

