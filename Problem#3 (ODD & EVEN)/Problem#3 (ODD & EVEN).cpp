// Problem#3 (ODD & EVEN).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>


using namespace std;

enum enNumberType { Odd = 1, Even = 2 };

int ReadNumber()
{
	int Number;
	cout << "\nPlease Enter a Number : ";
	cin >> Number;
	return Number;
}

enNumberType CheckNumberTybe(int Num)
{
	int Result = Num % 2;
	if (Result == 0)
		return enNumberType::Even;
	else
		return enNumberType::Odd;
}

void PrintNumberType(enNumberType NumberType)
{
	if (NumberType == enNumberType::Even)
		cout << "\n Number Is Even \n";
	else
		cout << "\n Number Is Odd \n";
}
int main()
{
	PrintNumberType(CheckNumberTybe(ReadNumber()));

	return 0;
}
