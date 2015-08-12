import java.util.Scanner;
class Sum
{
	int num1, num2, sum;
	void ipNos()
	{
		Scanner inp = new Scanner(System.in);
		System.out.println("Enter a number: ");
		num1 = inp.nextInt();
		System.out.println("Enter another number: ");
		num2 = inp.nextInt();
		sumNos();
	}
	void sumNos()
	{
		sum = num1 + num2;
		dispRes();
	}
	void dispRes()
	{
	System.out.println("The sum of the 2 numbers is: "+sum);
	}
	public static void main (String []args)
	{
		Sum ob = new Sum ();
		ob.ipNos();
	}
}