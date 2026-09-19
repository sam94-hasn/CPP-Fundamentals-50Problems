// Problem#28.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


enum enODDorEVEN { Odd = 1, Even };

int ReadNumberToPrint()
{
	int Num;

	do
	{

		cout << "Please Enter The Odd Number For Wanted To Print It : " << endl;
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

int SumTheOddNumberFrom1ToN(int Num)
{
	int sum = 0;

	for (int Counter = 1;Counter <= Num;Counter++)
	{

		if (CheckOddOrEven(Counter)==enODDorEVEN::Odd)
		{

			sum = sum + Counter;

		}
	}

	return sum;
}

void PrintSum(int Sum)
{
	cout << "\n-------------------------------\n";

	cout << "The Sum Odd Number = " << Sum << endl;
}


int main()
{
	int Num = 0;
	Num = ReadNumberToPrint();
	PrintSum(SumTheOddNumberFrom1ToN(Num));


	return 0;

}

