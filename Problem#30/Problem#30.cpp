// Problem#30.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
 
using namespace std;


int Check_Positive_Num(string Message)
{
	int Num = 0;

	do
	{
		cout << Message << endl;
		cin >> Num;

	} while (Num < 0);

	return Num;
}

int Calculate_Factorial(int Num)
{

	int Factorial = 1;

	for (int Counter = Num;Counter > 1;Counter--)
	{

		Factorial = Counter * Factorial;

	}

	return Factorial;
}

void Print_Result(int Num, int Factorial)
{
	cout << "\n===============================\n";

	cout << Num << "! = " << Factorial << endl;
}

int main()
{
	int Num = 0;
	Num = Check_Positive_Num("Please Enter A Positive Number For Calculate It Factorial : ");
	Print_Result(Num, Calculate_Factorial(Num));

	return 0;
}
