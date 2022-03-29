#include <iostream>
#include <climits>
using namespace std;
int main()
{
	int n, max=INT_MIN, count=0;
	cout << "enter a number and to exit enter any value that is different from integer";
	while(cin>>n)
	{
		if(n > max)
		{
			max = n;
			count = 1;
		}
		else if(n == max)
		{
			count++;
		}
	}
	cout << "the largest number is" << " " << max << endl;
	cout << "the occurence of count of the largest number is " << count;
}