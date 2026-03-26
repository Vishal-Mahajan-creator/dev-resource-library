import java.util.Scanner;
class Student
{
	public int age;
	public String name;

	public Student()
	{
		this.age=age;
		this.name=name;
        Scanner scan=new Scanner(System.in);

		System.out.println("Enter your age:-");
		age=scan.nextInt();
		name=scan.nextLine();
	
		System.out.println("Enter your name:-");
		name=scan.nextLine();
	}		

}
class UserInput
{
	public static void main(String[] args)
	{
		Student obj=new Student();
	 	System.out.println("\nStudent age: " + obj.age);
        	System.out.println("Student name: " + obj.name);
	}
			
}