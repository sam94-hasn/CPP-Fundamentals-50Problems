// Problem# 26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int ReadNumberToPrint()
{
	int Num = 0;
	do
	{
		cout << "Please Enter The Positive Number For Wanted To Print It : " << endl;
		cin >> Num;

	} while (Num <= 0);


	return Num;

}

void PrintRangeFrom1ToN(int Num)
{
	cout << "\n-------------------------------\n";

	for (int Counter = 1;Counter <= Num;Counter++)
	{

		cout << Counter << endl;

	}
}

int main()
{
	int Number = 0;

	Number = ReadNumberToPrint();
	PrintRangeFrom1ToN(Number);

	return 0;

}
