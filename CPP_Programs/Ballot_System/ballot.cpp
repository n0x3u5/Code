#include<iostream>
using namespace std;

class Ballot
{
	int candidate[5], spoil, count, i;

	public:
	void count_votes()
	{

		for (i=0;i<5;i++)
			candidate[i]=0;

		i=1;
		spoil = 0;

		while(i)
		{
			cout << "Enter the candidate number [1-5] for whom you want to vote: ";
			cin >> count;

			if (count>5 || count<1)
				spoil++;
			else
				candidate[count-1]++;

			cout << "Choose [1] to continue voting" << endl << "Choose any other number to stop voting" << endl << "Enter choice: ";
			cin >> i;

			if(i!=1)
				break;
		}

		for (i=0;i<5;i++)
			cout << "Candidate " << (i+1) << " received " << candidate[i] << " votes." <<endl;

		cout << "There were " << spoil << " spoilt votes.";

	}

};

int main()
{

	Ballot ball;

	ball.count_votes();

	cout << endl;

	return 0;

}
