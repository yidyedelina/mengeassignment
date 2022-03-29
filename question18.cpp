#include <iostream>
#include <cmath>
using namespace std;
int factorial(int n)
{
	if(n == 1 || n == 0) return 1;
	return n*factorial(n - 1);
}
int main()
{
	float ans  = 0;
	float x;
	cout << "please input x to calculate e" << endl;
	cin>>x;
	for(int i = 0; i < 10; i++)
	{
		ans = ans + pow(x,i)/factorial(i);
	}
	cout << "the answer is approximately" << ans;
	return 0;
}