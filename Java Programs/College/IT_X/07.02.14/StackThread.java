class Stack
{
	int a[] = new int [20];
	boolean value=true;
	int top=-1;
	synchronized void push(int q)
	{
		if(!value)
			try
			{
				wait();
			}
			catch(InterruptedException ob)
			{
				System.out.println("Caught Interrupt");
			}
		if(top==20)
			System.out.print("Full Stack");
		else
		{
			a[++top]=q;
			System.out.println(q+" was pushed.");
		}
		value=false;
		notify();
	}
	synchronized void pop()
	{
		if(value)
			try
			{
				wait();
			}
			catch(InterruptedException ob)
			{
				System.out.println("Caught Interrupt");
			}
		if(top==-1)
			System.out.println("Stack is empty.");
		else
		{
			System.out.println(a[top]+" was popped.");
			top--;
		}
		value=true;
		notify();
	}
}
class PusherA implements Runnable
{
	Stack stk;
	PusherA(String s, Stack st)
	{
		stk=st;
		new Thread (this,s).start();
	}
	public void run()
	{
		int i=1;
		while (i<=6)
		{
			stk.push(i);
			i++;
		}
	}
}
class PusherB implements Runnable
{
	Stack stk;
	PusherB(String s, Stack st)
	{
		stk=st;
		new Thread (this,s).start();
	}
	public void run()
	{
		int i=11;
		while (i<=16)
		{
			stk.push(i);
			i++;
		}
	}
}
class Popper implements Runnable
{
	Stack stk;
	Popper(String s, Stack st)
	{
		stk=st;
		new Thread (this,s).start();
	}
	public void run()
	{
		int i=0;
		while (i<=6)
		{
			stk.pop();
			i++;
		}
	}
}
class StkThrd
{
	public static void main(String []args)
	{
		Stack stk=new Stack();
		new PusherA ("Pusher1 ",stk);
		new PusherB ("Pusher2 ",stk);
		new Popper ("Popper ",stk); 
	}
}