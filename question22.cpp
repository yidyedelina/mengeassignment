#include <iostream>
using namespace std;

int main()
{
	int n = 1;
	while(n > 0)
	{
		int digit = 0;
		cout << "please enter a number" << endl;
		cin>>n;
		int tmp = n;
		while(tmp != 0)
		{
			tmp = tmp / 10;
			digit++;
		}
		cout << digit << endl;
	}

	return 0;
}