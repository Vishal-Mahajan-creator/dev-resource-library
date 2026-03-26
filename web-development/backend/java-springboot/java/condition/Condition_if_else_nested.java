import java.util.*;
class Condition_if_else_nested
{
	public static void main(String[] args)
	{
		int roll,age;
		long phone;
		String name;

		Scanner obj=new Scanner(System.in);
		System.out.print("Enter your name:-\t");
		name=obj.nextLine();
		
		if(name.equals("Vishal")||name.equals("vishal"))
		{
			System.out.print("Enter your Roll no:-\t");
			roll=obj.nextInt();
			if(roll==6171)
			{			
					System.out.print("Enter your age:-\t");
		        		age=obj.nextInt();

				if(age>=18)
				{
					
					
					System.out.print("Enter your ph no:-\t");
		        		phone=obj.nextLong();
					
					System.out.println("\n\nYour Name is:-"+name);
					System.out.println("\nYour Roll no. is:-"+roll);
					System.out.println("\nYour Age is:-"+age);
					System.out.print("\nYour ph no:-"+phone);

				}
				else
				{
					
					System.out.println("Age is not valid "+age);
				}
			}
			else
				{
				System.out.println("Roll no. is not valid "+roll);
				}
		}
		else
			{
			System.out.println("Name is not valid "+name);
			}

	}
}