#include<iostream>
using namespace std;

class Minimum
{
	int inp_arr[30], num_ele, min;

	public:
	void take_input()
	{

		cout << "Enter the number of elements: ";
		cin >> num_ele;

		for (int i=0;i<num_ele;i++)
		{

			cout << "Enter element [" << (i+1) << "]: ";
			cin >> inp_arr[i];
			
		}

		find_min(inp_arr, num_ele);
	
	}

	void find_min(int inp_arr[], int num_ele)
	{

		for (int i=0;i<num_ele-1;i++)
		{
			if (inp_arr[i] < inp_arr[i+1])
			
				min = inp_arr[i];

			else
				min = inp_arr[i+1];
				
		}

		cout << "The minimum element is: " << min;
		
	}
};

int main()
{

	Minimum min;
	
	min.take_input();

	cout << endl;

	return 0;
	
}
