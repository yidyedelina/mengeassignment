#include <iostream>
using namespace std;

int factorial(int n)
{
 if(n == 1 || n == 0) return 0;
 return n*factorial(n-1);
}
int main()
{
	int factorialSum = 0,n;
	cout << "please enter the size of the sequence" << endl;
	cin>>n;
	for(int i = 1; i <= n;i++)
	{ 
		factorialSum = factorialSum + factorial(i);
	}
	cout << "The sum is " << factorialSum;
}