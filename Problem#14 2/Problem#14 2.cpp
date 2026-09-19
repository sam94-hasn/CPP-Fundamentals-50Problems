// Problem#14 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void ReadNumber(int& Num1, int& Num2)
{
	cout << "Please Enter The Nymber [1] : " << endl;
	cin >> Num1;

	cout << "Please Enter The Nymber [2] : " << endl;
	cin >> Num2;

}

void SwapOf_2Number(int& A, int& B)
{
	int Temp;
	Temp = A;
	A = B;
	B = Temp;
}

void PrintNum(int Num1, int Num2)
{
	cout << "\n\nNumber [1] is : " << Num1 << endl;
	cout << "Number [2] is : " << Num2 << endl;

}

int main()
{
	int Num1, Num2;
	ReadNumber(Num1, Num2);
	PrintNum(Num1, Num2);
	SwapOf_2Number(Num1, Num2);
	PrintNum(Num1, Num2);

	return 0;
}
