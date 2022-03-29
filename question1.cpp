#include <iostream>
using namespace std;
int cube(int n)
{
	return (n*n*n);
}
//checks
int main()
{
	int n;
	cout << "enter a number to calculate the cube" << endl;
	cin>>n;
	cout << cube(n);
	return 0;
}