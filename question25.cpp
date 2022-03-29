#include <iostream>
using namespace std;

int main()
{
	int n = 1, total = -1, sum =  0, negative = 0, positive = 0;
	cout << "enter numbers"<< endl;
	while(n != 0)
	{
		cin >> n;
		if(n > 0) positive++;
		else if(n < 0) negative++;
		sum = sum + n;
		total++;
	}
	cout << "The number of positives is " << positive << endl;
	cout << "The number of negative is " << negative << endl;
	cout << "The total number is " << total << endl;
	cout << "The average is " << ((float)sum/(float)total) << endl;

	return 0;
}