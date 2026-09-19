// Problem#32.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int ReadNum(string Message)
{
	int Num = 0;
	do
	{
		cout << Message << endl;
		cin >> Num;


	} while (Num < 0);

	return Num;
}

int CalculatePower(int Number, int Exponent)
{
	if (Exponent == 0)
	{
		return 1;
	}

	if (Number == 0)
	{
		return 0;
	}

	int Power = 1;

 	for (int i = 1;i <= Exponent;i++)
	{ 
	 
		Power = Power * Number;
	}

	return Power;

}

void PrintResult(int Number, int Exponent, int Power)
{

	cout << "\n===========================\n";

	cout << Number << "^" << Exponent << " = " << Power << endl;

}

int main()
{
	int Number, Exponent, Power;

	Number = ReadNum("Please Enter A Positive Number : ");
	Exponent = ReadNum("Please Enter A Exponent : ");
	Power = CalculatePower(Number, Exponent);

	PrintResult(Number, Exponent, Power);

	return 0;

}

