/*class A
{
	int x;
	static int v;
	A()
	{System.out.println("no arg const.");}
	A(int a)
	{System.out.println("1 arg const.");}
	{System.out.println("Init 1");	}
	static
	{
		System.out.println("Stat1");
		v=5;
	}
	{System.out.println("Init 2");}
	static
	{System.out.println("Stat2");}
	static int d()
	{
		
		return (x);
	}
}
class B
{
	static
	{System.out.println("Stat B");}
}
class X extends A
{
	
	public static void main(String[] args) {
		new X().CC();
		System.out.println(v);
	new A();
	new A(4);
	}
	static void CC()
	{
		System.out.println(A.d());
	}

}
class A
{
	int useA()
	{
		int a=5;
		return a;
	}
}
class B extends A
{
	void use()
	{
		System.out.println(useA());
	}
}
class X
{
	public static void main(String[] args) {
		new A().useA();
		new B().use();
	}
}*/


class A
{

	public static void main(String[] args) 
	{

		System.out.println("us");

	}

	protected static void main()
	{
		System.out.println("A");

	} 
}