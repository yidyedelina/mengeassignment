#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int low = 100, high = 1000;
	for(int i = low; i < high; i++)
	{
		int tmp = i;
		int digitSum = 0;
		while(tmp != 0)
		{
			int c = tmp % 10;
			digitSum = digitSum + pow(c, 3);
			tmp = tmp / 10;
		}
		if(i == digitSum) cout << i << " " << endl;
	}
	return 0;
}