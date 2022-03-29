#include <iostream>
using namespace std;
float rectangle(float h, float w)
{
	float area;
	area = h * w;
	return area;
}
int main()
{
	float h = 4, w = 6;
	cout << rectangle(h, w);
	return 0;

}