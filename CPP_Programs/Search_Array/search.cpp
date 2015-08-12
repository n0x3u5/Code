#include<iostream>
using namespace std;

class Search
{

	int num_ele, key, flag;
	int inp_arr[30];
	
	public:
	void take_input()
	{
	
		cout << endl;
		
		cout << "Enter the number of elements: ";
		cin >> num_ele;
		
		cout << endl;
		
		for (int i=0;i<num_ele;i++)
		{
		
			cout << "Enter element [" << (i+1) << "]: ";
			cin >> inp_arr[i];
			
		}
		
		cout << endl;
	
		cout << "Enter the value to search for: ";
		cin >> key;

		cout << endl;

		find_element(inp_arr, key, num_ele);
		
	}
	
	void find_element(int inp_arr[], int key, int num_ele)
	{
	
		flag = 0;
		
		for (int i=0;i<num_ele;i++)
		{
			if (inp_arr[i] == key)
			{
				cout << "Element found at position [" << (i+1) << "]." << endl;
				flag = 1;
			}
		}

		if(flag == 0)
			cout << "Element could not be found." << endl;
			
	}
	
};

int main()
{

	Search srch;
	
	srch.take_input();

	cout << endl;
	
	return 0;	
	
}
