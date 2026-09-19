// Problem#18 (Circle Area ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

float ReadRadius()
{
	float Raduis;

	cout << "Please Enter A Radius : " << endl;
	cin >> Raduis;

	return Raduis;
}

float Circle_Area(float Radius)
{
	const double PI = 3.1415926535897;

	float Area = PI * pow(Radius, 2);

	return Area;
}

void PrintArea(float Area)
{
	cout << "\n\nThe Circle Area = " << Area << " m^2" << endl;
}

int main()
{

	PrintArea(Circle_Area(ReadRadius()));

	return 0;

}
