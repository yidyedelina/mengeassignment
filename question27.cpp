#include <iostream>
using namespace std;

int main()
{
	int choice;
	float n;
	cout <<"Enter 1 to convert kilograms to pounds, enter 2 convert miles to kilo meter, enter 3 to converts hours to minute =>";
	cin >> choice;
	cout << "Enter a magnitude you want to change =>";
	cin >> n;
	float pounds, km, minutes;
	switch(choice)
	{
	case 1:
		pounds = n*2.205;
		cout << n << "kilograms =" << pounds << "pounds"<< endl;
		break;
	case 2:
		km = n*1.60934;
		cout << n << "miles =" << km <<"km" << endl;
		break;
	case 3:
		minutes = n*60;
		cout << n << "hr =" << minutes << "minutes" << endl; 
	default:
		break;
	}
	return 0;
}