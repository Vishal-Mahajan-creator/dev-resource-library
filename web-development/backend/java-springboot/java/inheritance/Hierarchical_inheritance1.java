import java.util.*;
class Problem
{
	void problem()
	{
	  System.out.println("Check the output");
	}
}
class Factorial extends Problem
{
	void factorial()
	{
		int no,total=1;
		
	
		System.out.println("Enter no. to check the factorial:-");
		Scanner sc=new Scanner(System.in);
		no=sc.nextInt();
	
		
		for(int j=1;j<=no;j++)
		{
			total*=j;
		}
		System.out.println("\nThe factorial is "+total);
		
	}
}

class Leap_year extends Problem
{
	void leap_year()
	{
		int year;
		
		System.out.println("\nEnter year to check the Leap year:-");
		Scanner sc1=new Scanner(System.in);
		year=sc1.nextInt();

		if(year%4==0)
		{
			System.out.println("\nThe year is leap");
		}
		else
		{
			System.out.println("\nThe year is not leap");	
		}
	
	}
}

public class Hierarchical_inheritance1
{
	public static void main(String[] args)
	{
		Factorial fact=new Factorial();
		fact.factorial();
		
		Leap_year leap=new Leap_year();
		leap.leap_year();
	}
}