#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float ten;
	ten = 10000*pow(1.005, 9);
	float sum;
	for(int i = 0; i < 4; i++)
	{
		sum = sum + 1000*(1.005, 9 + i);
	}	
	cout << "total tutition is" << sum;
	return 0;
}