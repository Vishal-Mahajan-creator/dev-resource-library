class Myclass
{
	
	void sum()
	{
		int a=100;
		int b=200;
		float c=a+b;
     		System.out.println("Addition of two variable:-"+c);
	}	
	void sub()
	{
		int a=100;
		int b=200;
		float c=b-a;
     		System.out.println("Substraction of two variable:-"+c);
	}
	void multi()
	{
		int a=10;
		int b=200;
		float c=a*b;
     		System.out.println("Multipication of two variable:-"+c);
	}	
	void div()
	{
		int a=10;
		int b=200;
		float c=b*a;
     		System.out.println(" Divition of two variable:-"+c);
	}
	void mod()
	{
		int a=10;
		int b=200;
		float c=b%10;
     		System.out.println("Moduleof two variable:-"+c);
	}
}
class Variable
{
	public static void main(String[] args)
	{
		Myclass obj=new Myclass();
		obj.sum();
		obj.sub();
		obj.multi();
		obj.div();
		obj.mod();		
	}
}