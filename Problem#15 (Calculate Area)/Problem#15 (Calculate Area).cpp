// Problem#15 (Calculate Area).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void ReadInfo(float& Width, float& Length)
{
	cout << "Please Enter The Rectangle Width : " << endl;
	cin >> Width;

	cout << "Please Enter The Rectangle Length : " << endl;
	cin >> Length;

}

float CalculateRectangleArea(float Width, float Length)
{
	return (Width * Length);
}

void PrintArea(float Area)
{
	cout << "\n\nThe Rectangle Area = " << Area << " m^2" << endl;
}

int main()
{
	float Width, Length;
	ReadInfo(Width, Length);
	PrintArea(CalculateRectangleArea(Width, Length));
}
