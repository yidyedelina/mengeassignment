#include <iostream>
using namespace std;
//this function return 0 if the number is not a prime number if it is prime printt 1
int check_primenumber(int p)
{
	for(int i = 2; i < p; i++)
	{
		if(p % i == 0) return 0;
	}
	return 1;
}
//this function calculate the sum of the digit and return their sum
int sum_digit(int num)
{
	int sum = 0, tmp;

	tmp = num;
	while(tmp != 0)
	{
		sum = sum + (tmp%10);
		tmp = tmp/10;
	}
	return sum;
}
int main()
{
	int p, num;
	cout << "Enter a number to check whether it is a prime or not" << endl;
	cin>>p;
	cout << check_primenumber(p) <<endl; //0 means false
	cout << "enter a number to find the sum of its digit" << endl;
	cin>> num;
	cout <<"the sum is" << sum_digit(num);
	return 0;

}