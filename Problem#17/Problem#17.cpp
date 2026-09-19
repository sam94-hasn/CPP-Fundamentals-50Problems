 

#include <iostream>
#include<cmath>

using namespace std;

void ReadInfo(float& Base, float& Height)
{
	cout << "Please Enter The triangle Base : " << endl;
	cin >> Base;

	cout << "Please Enter The triangle Height : " << endl;
	cin >> Height;

}

float Triangle_Area(float B, float H)
{
	float Area = (B / 2 * H);

	return Area;
}

void PrintArea(float Area)
{
	cout << "\n\nThe triangle Area = " << Area << " m^2" << endl;
}

int main()
{
	float  Base, Height;
	ReadInfo(Base, Height);
	PrintArea(Triangle_Area(Base, Height));

	return 0;

}


