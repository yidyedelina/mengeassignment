#include <iostream>
using namespace std;

int isPrimeNumber(int p)
{
	for(int i = (p-1); i <= 2;i--)
	{
		if(p%i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int p;
	cout <<"enter a number to check it;s prime" << endl;
	cin>>p;
	int isPrime = isPrimeNumber(p);
	if(isPrime == 1) cout << p << "is prime";
	else cout << p << "is not a prime";
	return 0;
}