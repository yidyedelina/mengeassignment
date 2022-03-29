#include <iostream>
using namespace std;
int main()
{
	int phoneNum, current,tmp;
	cout << "enter phone number" << endl;
	cin >> phoneNum;
	tmp = phoneNum;
	while(tmp != 0)
	{
		tmp = tmp / 10;
		if(tmp!= 0) current = tmp % 10;
		
	}
	if(current == 9) cout << "mobile" << endl;
	else cout << "fixed" << endl;
	return 0;
}