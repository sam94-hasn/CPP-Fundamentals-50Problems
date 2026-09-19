// Problem#19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>

using namespace std;

float ReadDiameter()
{
	float Diameter;

	cout << "Please Enter A Diameter : " << endl;
	cin >> Diameter;

	return Diameter;
}

float Circle_AreaByDiameter(float D)
{
	const double PI = 3.1415926535897;

	float Area = (PI * pow(D, 2)) / 4;

	return Area;
}

void PrintArea(float Area)
{
	cout << "\n\nThe Circle Area = " << Area << " m^2" << endl;
}

int main()
{
	PrintArea(Circle_AreaByDiameter(ReadDiameter()));

	return 0;
}
