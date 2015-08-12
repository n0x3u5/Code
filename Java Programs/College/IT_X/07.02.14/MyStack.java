import java.util.*;
class Q
{
	int top=-1;
	int a[]=new int[4];
	int item;
    boolean value = false;
    synchronized void Push(int q)
	{
        if(!value)
        {
            try
            {
                wait();
            }
            catch(InterruptedException ob)
            {
                System.out.println("Caught!");
            }
        }
		a[++top]=q;
		System.out.println("Pushed item is "+q);
        value = false;
        notify();
	}
	synchronized int Pop()
	{
        if(value)
        {
            try
            {
                wait();
            }
            catch(InterruptedException ob)
            {
                System.out.println("Caught!");
            }
        }
	    item=a[top--];
		System.out.println("Popped item is "+item);
        value = false;
        notify();
		return item;
	}
}
class Thread1 implements Runnable
{
	Q n;
	Thread1(String name,Q q)
	{
		n=q;
		new Thread(this,name).start();
	}
	public void run()
	{
        for(int i=1; i<=20; i+=2)
            n.Push(i);
	}
}
class Thread2 implements Runnable
{
	Q n;
	Thread2(String name,Q q)
	{
		n=q;
		new Thread(this,name).start();
	}
	public void run()
	{
		for(int i=2; i<=20; i+=2)
            n.Push(i);
	}
}
	
class Thread3 implements Runnable
{
	Q n;
	Thread3(String name,Q q)
	{
		n=q;
		new Thread(this,name).start();
	}
	public void run()
	{
        for(i=1;i<=20;i++)
            n.Pop();
	}
}
class MyStack
{
	public static void main(String []args)
	{
		Q q=new Q();
		new Thread1("Thread 1",q);
		new Thread2("Thread 2",q);
		new Thread3("Thread 3",q);
	}
}

	
