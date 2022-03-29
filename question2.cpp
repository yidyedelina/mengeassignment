#include <iostream>
using namespace std;

float triangle(float h, float w)
{
	float area;
	area = (1/2)*(h * w);
	return area;
}

//checks triangle 
int main()
{
	float h = 4, w = 6;
	cout << triangle(h, w);
	return 0;

}