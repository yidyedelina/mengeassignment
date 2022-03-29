#include <iostream>
#include <cmath>
using namespace std;
int reverseDigit(int num)
{
	int revNum=0, c,digit = 0,tmp, i = 1;
	tmp = num;
	while(tmp != 0)
	{
		tmp = tmp/10;
		digit++;
	}
	while(num != 0)
	{
		c = num % 10;
		revNum = revNum + c*pow(10,digit - i);
		num = num / 10;
		i++;
	}
	return revNum;
}
int main()
{
	int num; 
	cout <<"input a number to get its reverse" << endl;
	cin >> num;
	cout << "the reversed number is" << reverseDigit(num);
}