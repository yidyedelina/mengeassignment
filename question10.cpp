
#include <iostream>
using namespace std;

int calculateScore(int list[], int n)
{
	int total = 0;
	for(int i = 0; i < n; i++)
	{
		if(i > 20) total++;
	}
	return total;
}

int main()
{
	int list[] = {23,42,24,45, 55, 67,12,83,78,1,34,5,24};
	int n;
	cout << "input the STUDENT NUMBER" << endl;
	cin>>n;
	cout << calculateScore(list, n);
}