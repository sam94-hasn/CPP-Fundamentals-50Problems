// Problem#27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int ReadNumberToPrint()
{
	int Num;
	do
	{

		cout << "Please Enter The Positive Number For Wanted From Print It : " << endl;
		cin >> Num;


	} while (Num <= 0);

	return Num;

}

void PrintRangeFromNto1(int Num)
{
	cout << "\n-------------------------------\n";

	for (int Counter = Num;Counter >= 1;Counter--)
	{

		cout << Counter << endl;

	}
}


int main()
{
	int Number = 0;

	Number = ReadNumberToPrint();
	PrintRangeFromNto1(Number);

	return 0;
}
