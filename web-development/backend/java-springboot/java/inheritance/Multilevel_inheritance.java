class Cat
{
	void cat_sound()
	{
		System.out.println("Cat make sound meow meow");
	}
}

class Dog extends Cat
{
	void dog_sound()
	{
		System.out.println("Dog make sound bhow bhow");
	}
}
 
class Animal extends Dog
{
	void animal_sound()
	{
		System.out.println("Animal make sound ");
		System.out.println();
	}
}

class Multilevel_inheritance
{
	public static void main(String[] args)
	{
		Animal obj=new Animal();
		obj.animal_sound();
		obj.dog_sound();
		obj.cat_sound();

	}
}


