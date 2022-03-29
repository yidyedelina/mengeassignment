#include <iostream>
using namespace std;
int main()
{
	float deno = 3;
	float numer = 1;
	float sum = 0;
	for(int i = 0; i < 97;i = i + 2)
	{
		sum = sum + (numer + i)/(deno + i);
	}
	cout << "the sum of 1/3 + 3/5 + 5/7 + ... + 95/97 + 97/99 \t" << sum;
}