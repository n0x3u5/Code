class Animal
{
	void height()
	{
		System.out.println("The height varies far too greatly accross the Animal category.");
	}
}

class Canine extends Animal
{
	void height()
	{
		System.out.println("The height varies from half a foot to 5 feet in the Canine category.");
	}
}

class Wolf extends Canine
{
	void height()
	{
		System.out.println("The height varies from 3 feet to 4 feet accross the Wolf category.");
	}

}

class Dog extends Canine
{
	void height()
	{
		System.out.println("The height varies from half a foot high to as higher than humans in the Dog category.");
	}

}

public class AnimalDispatch
{
		public static void main(String []args)
		{
			Animal ani = new Animal();
			Canine can = new Canine();
			Wolf wol = new Wolf();
			Dog dog = new Dog();
			ani.height();
			can.height();
			wol.height();
			dog.height();
			ani = dog;
			ani.height();
		}
}