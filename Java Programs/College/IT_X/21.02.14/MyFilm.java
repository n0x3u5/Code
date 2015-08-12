import java.util.*;
class Film
{
	int length;
	String director;
	Film(int length, String director)
	{
		this.length=length;
		this.director=director;
	}
	void display()
	{
		System.out.println("The film's director is "+director+".");
		System.out.println("The film's runtime is "+length+" minutes.");
	}
}
class Commercial extends Film
{
	int budget;
	Commercial(int budget, int length, String director)
	{
		super(length, director);
		this.budget=budget;
	}
	void display()
	{
		super.display();
		System.out.println("The film's budget is Rs. "+budget+".");
	}
}
class Action extends Commercial
{
	String centric;
	Action(String centric, int budget, int length, String director)
	{
		super(budget, length, director);
		this.centric=centric;
	}
	void display()
	{
		super.display();
		System.out.println("This film is "+centric+" centric.");
	}
}
class MyFilm
{
	public static void main (String []args)
	{
		Action act = new Action("drama", 32000000, 132, "Rajkumar Hirani");
		act.display();
	}
}
