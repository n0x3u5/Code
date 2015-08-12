#include<iostream>
#include<string.h>
#include<ctype.h>

using namespace std;

class String
{
	char s[50],t[50];

	public:
	String(char *r,char *q)
	{

		strcpy(s,r);
		strcpy(t,q);

	}

	class StringLengthTooLongException{};
	class ConcatStringLengthTooLongException{};

	void cal()
	{

		int x,y,z;

		x=strlen(s);
		y=strlen(t);

		if(x<32 && y<32)
		{

			z=x+y;

			if(z>32)
				throw ConcatStringLengthTooLongException();
			else
				cout<<s<<""<<t;

		}

		else
			throw StringLengthTooLongException();
	}

};

int main()
{
	char s[50],t[50];

	cout<<"Enter the first string: ";
	cin.getline(s,50);

	cout<<"Enter the second string: ";
	cin.getline(t,50);

	try
	{
		String S1(s,t);
		S1.cal();
	}
	catch(String::StringLengthTooLongException)
	{
		cout<<"\nInput string length is greater than 32\n";
	}
	catch(String::ConcatStringLengthTooLongException)
	{
		cout<<"\nConcatenated string length is greater than 32\n";
	}

	cout<<endl;

	return 0;
}
