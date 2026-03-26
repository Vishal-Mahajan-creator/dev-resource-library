import java.util.Scanner;
class Student
{
	public int age;
	public String name;

	void student()
	{
	Scanner scan=new Scanner(System.in);
	
	age=scan.nextInt();
	System.out.println("Enter your age:-"+age);
	
	name=scan.nextline();
	System.out.println("Enter your name:-"+name);
	
	}		
}
class UserInput
{
	public static void main(String[] args)
	{
	Student obj=new Student();
	obj.student();
			
	}
}