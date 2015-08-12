#include<iostream>
using namespace std;

class Time
{
	int h, m, s, hs, ms, secs;
	public:
	void input_time(int hh, int mm, int ss)
	{
		h=hh;
		m=mm;
		s=ss;
	}
	void add_time(Time t)
	{
		Time time_sum;
		time_sum.s = (s+t.s)%60;
		time_sum.m = ((s+t.s)/60 + m + t.m)%60;
		time_sum.h = (m+t.m)/60 + h + t.h;
		time_sum.disp_time_add();
	}
	void sub_time(Time t)
	{
		Time time_unsum;
		time_unsum.s=s-t.s; 
		time_unsum.m=((m*60)-(t.m*60))/60;;
		time_unsum.h=((h*60*60)-(t.h*60*60))/3600;
		time_unsum.disp_time_sub();
	}
	void disp_time_add()
	{
		cout<<"Summation:-"<<endl<<h<<":"<<m<<":"<<s<<endl;
	}
	void disp_time_sub()
	{
		cout<<"Subtraction:-"<<endl<<h<<":"<<m<<":"<<s<<endl;
	}
};

int main()
{
	Time t1, t2;
	t1.input_time(2,35,40);
	t2.input_time(3,40,25);
	t1.add_time(t2);
	return 0;
}
