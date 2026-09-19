// Problem#13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>

using namespace std;


void ReadNumber(int& Num1, int& Num2, int& Num3)
{
	cout << "Please Enter a Number 1 :" << endl;
	cin >> Num1;

	cout << "Please Enter a Number 2 :" << endl;
	cin >> Num2;

	cout << "Please Enter a Number 3 :" << endl;
	cin >> Num3;
}

int MaxOf_3NUMBER(int Num1, int Num2, int Num3)
{
	if (Num1 > Num2 && Num1 > Num3)
		return Num1;

	else if (Num2 > Num1 && Num2 > Num3)
		return Num2;

	else
		return Num3;
}
void PrintResult(int MaxNum)
{

	cout << "\nThe Number of : " << MaxNum << "  is Maxing!!!" << endl;

}

int main()
{
	int Number1, Number2, Number3;
	ReadNumber(Number1, Number2, Number3);
	PrintResult(MaxOf_3NUMBER(Number1, Number2, Number3));

	return 0;

}
