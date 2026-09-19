// Problem#20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>

using namespace std;

float ReadSquareSide()
{
	float SquareSide;

	cout << "Please Enter A Square Side : " << endl;
	cin >> SquareSide;

	return SquareSide;

}

double CircleArea_InscribedInASquare(float A)
{

	const double PI = 3.1415926535897;

	double Area = (pow(A, 2) * PI) / 4;

	return Area;

}

void PrintArea(double Area)
{
	cout << "\nThe Circle Area = " << Area << " m^2 " << endl;

}
int main()
{
	PrintArea(CircleArea_InscribedInASquare(ReadSquareSide()));

	return 0;
}
////المشاكل رقم 21  22  23  نفس الفكرة 
