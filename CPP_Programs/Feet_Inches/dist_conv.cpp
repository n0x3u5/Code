#include<iostream>
using namespace std;

class DB;

class DM	//m & cm
{

	float m;
	float cm;

	public:

		void input(float x, float y)
		{

			m=x;
			cm=y;

		}

	friend void DM_add(DM,DB);
	friend void DB_add(DM,DB);

};

class DB	// ft & in
{

	float ft;
	float in;

	public:

		void input(float x, float y)
		{

			ft = x;
			in = y;

		}

	friend void DM_add(DM,DB);
	friend void DB_add(DM,DB);

};

void DM_add(DM dm, DB db)
{

	float temp_cm, add_m;
	int add_cm;

	temp_cm = (dm.m*100)+dm.cm+((db.ft*12)*2.54)+(db.in*2.54);
	add_m = temp_cm/100;
	add_cm = temp_cm%100;

	cout << "The sum in metres and centimetres is:- " << endl << add_m << " m " << add_cm << " cm" << endl;

}

void DB_add(DM dm, DB db)
{

	float add_ft, temp_in;
	int add_in;

	temp_in = db.in+(db.ft*12)+((dm.m*3.2808)*12)+(dm.cm*0.3937);
	add_ft = temp_in/12;
	add_in = temp_in%12;

	cout << "The sum in feet and inches is:- " << endl << add_ft << " ft " << add_in << " in" << endl;

}

/*
1 ft = 12 in
1 m = 100 cm
1 in = 2.54 cm
1 cm = 0.3937 in
1 ft = 0.3048 m
1 m = 3.2808 ft
*/

int main()
{

	DM x;
	DB y;

	x.input(5,6);
	y.input(5,6);

	DM_add(x,y);
	DB_add(x,y);

	return 0;

}
