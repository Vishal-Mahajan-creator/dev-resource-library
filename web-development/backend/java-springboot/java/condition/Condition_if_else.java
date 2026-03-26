import java.util.Scanner;
class Condition_if_else
{
	public static void main(String[] args)
	{
		int a,b;
		Scanner obj=new Scanner(System.in);
		
		System.out.println("Enter 1st no.");
		a=obj.nextInt();

		System.out.println("Enter 2nd no.");
		b=obj.nextInt();
		
		if(a>b)
		{
			System.out.println("'A' is greater");
		}
		else
		{
			System.out.println("'B' is greater");
		}

	
	}
}