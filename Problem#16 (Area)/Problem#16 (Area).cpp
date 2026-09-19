// Problem#16 (Area).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
#include<string>
using namespace std;

void ReadInfo(float& Side, float& Diagonal)
{
	cout << "Please Enter The Rectangle Side : " << endl;
	cin >> Side;

	cout << "Please Enter The Rectangle Diagonal : " << endl;
	cin >> Diagonal;

}

double Rectangle_Area_DiagonalAndSide(float A, float D)
{
	double Area = A * sqrt(pow(D, 2) - pow(A, 2));

	return Area;
}

void PrintArea(double Area)
{
	cout << "\n\nThe Rectangle Area = " << Area << " m^2" << endl;
}

int main()
{
	float Side,Diagonal;
	ReadInfo(Side, Diagonal);
	PrintArea(Rectangle_Area_DiagonalAndSide(Side, Diagonal));

	return 0;

}

