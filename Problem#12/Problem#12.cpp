// Problem#12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void ReadNumber(int& Num1, int& Num2)
{
	cout << "Please Enter a Number 1 :" << endl;
	cin >> Num1;

	cout << "Please Enter a Number 2 :" << endl;
	cin >> Num2;
}

int MaxOf_2NUMBER(int Num1, int Num2)
{
	if (Num1 > Num2)
		return Num1;
	else
		return Num2;
}

void PrintResult(int Num1, int Num2)
{
	int MaxNum = MaxOf_2NUMBER(Num1, Num2);
	cout << "\nThe Number of : " << MaxNum << "  is Maxing!!!" << endl;

}

int main()
{
	int Number1, Number2;
	ReadNumber(Number1, Number2);
	PrintResult(Number1, Number2);

	return 0;

}
