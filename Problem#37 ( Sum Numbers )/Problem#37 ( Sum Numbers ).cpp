// Problem#37 ( Sum Numbers ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

int ReadNumberForSum(string Message)
{
	int Num = 0;

	cout << Message;
	cin >> Num;

	return Num;

}

int CalculateSumNumbers()
{
	int Sum = 0;
	int i = 1;

	int  Number = ReadNumberForSum("Number [" + to_string(i) + "] ?? ");

	while (Number != -99)
	{
		i++;

		Sum += Number;

		Number = ReadNumberForSum("Number [" + to_string(i) + "] ?? ");


	}

	return Sum;

}

int main()
{
	int  Sum = 0;


	Sum = CalculateSumNumbers();
	cout << endl << "Sum = " << Sum;

	return 0;
}

