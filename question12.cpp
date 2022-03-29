#include <iostream>
using namespace std;

int maxFinder(int list[], int n)
{
	int max=list[0];
	for(int i = 0; i < n; i++)
	{
		if(list[i] > max) max = list[i];
	}
	return max;
}
int minFinder(int list[], int n)
{
	int min=list[0];
	for(int i = 0; i < n; i++)
	{
		if(list[i] < min) min = list[i];
	}
	return min;
}
int main()
{
	int n;
	cout << "the length of the number"<< endl;
	cin >> n;
	int* list = new int[n];
	cout << "enter list of numbers";
	for(int i = 0; i < n; i++){
		cin>>list[i];
	}
	int maximum,minimum;
	maximum = maxFinder(list, n);
	minimum = minFinder(list, n);
	cout << "the maximum is " << maximum << endl;
	cout << "the minimum is " << minimum;
}