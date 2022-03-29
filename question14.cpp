#include <iostream>
using namespace std;
int GCD(int a, int b)
{
	unsigned int x, y, r;
	x = a;
	y = b;
	while(y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}
	return x;
}

int main()
{
	unsigned int a, b;
	cout << "enter two number to calculate gcd" << endl;
	cin>>a>>b;
	cout << "the gcd is" << GCD(a,b);
	return 0;
}