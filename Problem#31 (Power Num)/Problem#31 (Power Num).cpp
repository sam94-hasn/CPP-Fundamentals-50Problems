// Problem#31 (Power Num).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ReadNum(string Message)
{
	int Num = 0;
	do
	{
		cout << Message << endl;
		cin >> Num;


	} while (Num <= 0);

	return Num;
}

void PowerOf2_3_4(int Num)
{
	int a, b, c;

	a = Num * Num;
	b = Num * Num * Num;
	c = Num * Num * Num * Num;

	cout << Num << "^2 = " << a << endl;
	cout << Num << "^3 = " << b << endl;
	cout << Num << "^4 = " << c << endl;


}

int main()
{

	PowerOf2_3_4(ReadNum("Please Enter A Positive Number : "));
}
