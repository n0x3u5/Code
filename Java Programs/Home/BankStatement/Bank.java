class Bank
{
	int balance;
	char []m1 = new char[5];
	int  []m2 = new int [5];
	int p;
	Bank (int a)
	{
		balance = a;
		p = 0;
		m1[p] = 'O';
		m2[p] = a;
	}
	void deposit(int a)
	{
		balance+=a;
		if(p==4)
		{
			for(int i=0;i<4;i++)
			{
				m1[i]=m1[i+1];
				m2[i]=m2[i+1];
			}
			p--;
		}
		p++;
		m1[p]='D';
		m2[p]=a;
	}
	void withdrawal(int a)
	{
		balance-=a;
		if(p==4)
		{
			for(int i=0;i<4;i++)
			{
				m1[i]=m1[i+1];
				m2[i]=m2[i+1];
			}
			p--;
		}
		p++;
		m1[p]='W';
		m2[p]=a;
	}
	void balanceEnquiry()
	{
		System.out.println("Current balance is: "+balance);
	}
	void miniStatement()
	{
		for(int i=0;i<=p;i++)
			System.out.println(m1[i]+"........"+m2[i]);
	}
	public static void main(String []args)
	{
		Bank ob = new Bank(5000);
		ob.deposit(500);
		ob.deposit(600);
		ob.withdrawal(1000);
		ob.withdrawal(2000);
		ob.withdrawal(3000);
		ob.deposit(400);
		ob.balanceEnquiry();
		ob.miniStatement();
	}
}