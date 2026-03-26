class Student
{
	public int age=99;
	public String name;

	public Student()
	{	
		this.age=age;
		this.name="Vishal";
	}		
}
class Instance
{
	public static void main(String[] args)
	{
	Student obj=new Student();
	System.out.println("Student age:-"+obj.age);
	System.out.println("Student name:-"+obj.name);		
	}
}