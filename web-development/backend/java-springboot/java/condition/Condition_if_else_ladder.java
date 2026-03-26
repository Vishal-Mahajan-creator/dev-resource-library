import java.util.Scanner;
class Condition_if_else_ladder
{
	public static void main(String[] args)
	{
		int a,b,c;
		Scanner obj=new Scanner(System.in);
		
		System.out.print("Enter 1st no.\t");
		a=obj.nextInt();
		
		System.out.print("Enter 2nd no.\t");
		b=obj.nextInt();

		System.out.print("Enter 3rd no.");	
		c=obj.nextInt();
		
		if((a>b)&&(a>c))
		{
			System.out.println("'A' is greater"+a);
		}
		else if((b>a)&&(b>c))
		{
			System.out.println("'B' is greater"+b);
		}
		else 
		{
			System.out.println("'C' is greater"+c);
		}

	
	}
}