import java.util.Scanner;
class Student
{
	public float a,b,Total;
	void add()
	{
		
        	Scanner scan=new Scanner(System.in);
		System.out.println("Enter two no. to perform addition:-");
		a=scan.nextInt();  
		b=scan.nextInt();

		Total=a+b;
		System.out.println("Addition is:-"+Total);
		
	}		
	void sub()
	{
		
        	Scanner scan=new Scanner(System.in);
		System.out.println("\n\nEnter two no. to perform Substraction:-");
		a=scan.nextInt();  
		b=scan.nextInt();
		
		Total=a-b;
		System.out.println("Substraction is:-"+Total);
		
	}
	void multi()
	{
		
        	Scanner scan=new Scanner(System.in);
		System.out.println("\n\nEnter two no. to perform Multiplication:-");
		a=scan.nextInt();  
		b=scan.nextInt();
		
		Total=a*b;
		System.out.println("Multiplication is:-"+Total);
		
	}
	void div()
	{
		
        	Scanner scan=new Scanner(System.in);
		System.out.println("\n\nEnter two no. to perform Divistion:-");
		a=scan.nextInt();  
		b=scan.nextInt();
		
		Total=a*b;
		System.out.println("Divistion is:-"+Total);
		
	}
}
class Arithmatic
{
	public static void main(String[] args)
	{
		Student obj=new Student();
	 	obj.add();
		obj.sub();
		obj.multi();
		obj.div();
	}
			
}