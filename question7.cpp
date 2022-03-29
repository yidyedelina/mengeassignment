#include <iostream>
using namespace std;

int Fib(int n)
{
	if(n == 0 || n == 1) return 1;
	return (Fib(n-1) + Fib(n-2));
}

int main()
{
	int n;
	cout << "please input which term fibonacci to print" << endl;
	cin>>n;
	cout << Fib(n);
	return 0;
}