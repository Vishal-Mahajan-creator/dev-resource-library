
class Animal 
{
	void animal_sound()
	{
		System.out.println("Animal make sound ");
		System.out.println();
	}
}
class Cat extends Animal
{
	void cat_sound()
	{
		System.out.println("Cat make sound meow meow\n\n");
	}
}

class Dog extends Animal
{
	void dog_sound()
	{
		System.out.println("Dog make sound bhow bhow");
	}
}

public class Hierarchical_inheritance 
 {
    

	public static void main(String[] args)
	{
		Cat cat=new Cat();
		cat.animal_sound();
        cat.cat_sound();
        
        Dog dog=new Cat();
		cat.animal_sound();
		cat.dog_sound();

	}
}


