class Number
{
	//static variable
	static int age;
}
class StaticVariable
{
	public static void main(String[] args)
	{
		Number obj=new Number();
		Number obj1=new Number();
		obj.age=23;
		obj1.age=26;
		Number.age=30;
		System.out.println("obj:="+obj.age);
		System.out.println("obj1:="+obj1.age);
		System.out.println("Age:="+Number.age);
	} 
}