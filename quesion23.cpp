#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int N, count = 0;
	cout << "enter a bound to print prime numbers" << endl;
	cin >> N;
	int limit = sqrt(N);
	for(int i = 2; i <= N; i++)
	{
		int isPrime = 1;
		int times = 0;
		for(int j = 2; j <= limit; j++)
		{
			if(i % j == 0 && i != j)
			{
				isPrime = 0;
				break;
			}
			
		}
		if(isPrime == 1)
		{
			cout << i << " ";
			count++; 
		} 
	}
	cout << endl;
	cout << "the total number is " << count;
	return 0;
}