// Problem#29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
 
#include <iostream>
using namespace std;

enum enODDorEVEN { Odd = 1, Even };

int ReadNumberToPrint()
{
	int Num;
	do
	{

		cout << "Please Enter The Even Number For Wanted To Print It : " << endl;
		cin >> Num;


	} while (Num <= 0);

	
	return Num;

}

enODDorEVEN CheckOddOrEven(int Number)
{
	if (Number % 2 != 0)
		return enODDorEVEN::Odd;
	else
		return enODDorEVEN::Even;

}

int SumTheEvenNumberFrom1ToN(int Num)
{
	int sum = 0;

	for (int Counter = 1;Counter <= Num;Counter++)
	{

		if (CheckOddOrEven(Counter)==enODDorEVEN::Even)
		{

			sum = sum + Counter;

		}
	}

	return sum;
}

void PrintSum(int Sum)
{

	cout << "\n-------------------------------\n";

	cout << "The Sum Even Number = " << Sum << endl;
}


int main()
{

	int Number = 0;
	Number = ReadNumberToPrint();
	PrintSum(SumTheEvenNumberFrom1ToN(Number));
	 

	return 0;

}

