// Problem#39 ( Remainder Money ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Num = 0;
	do
	{
		cout << Message << endl;
		cin >> Num;

	} while (Num<=0);

	return Num;
}

int CalculatePaidBack(int CashPaid, int TotalBill)
{

	return (CashPaid - TotalBill);

}

void PrintResult(int PaidBack)
{

	cout << "\n==================\n";
	cout << "Remainder = " << PaidBack << endl;
}

int main()
{
	PrintResult(CalculatePaidBack(ReadPositiveNumber("Enter CashPaid : "), ReadPositiveNumber("Enter TotalBill : ")));

	return 0;
}
 