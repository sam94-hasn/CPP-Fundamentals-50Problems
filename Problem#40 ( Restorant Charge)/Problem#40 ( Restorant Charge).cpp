// Problem#40 ( Restorant Charge).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float ReadNumber(string Message)
{
	float Num = 0;
	do
	{
		cout << Message << endl;
		cin >> Num;

	} while (Num <= 0);

	return Num;
}

float TotalBillAfterServiceAndTax( float TotalBill)
{
 

	TotalBill = TotalBill * 1.1;
	TotalBill = TotalBill * 1.16;

	return TotalBill;

}

int main()
{
	float TotalBill = 0;

	TotalBill = ReadNumber("Enter A Total Bill : ");
	cout << "\nResult = " << TotalBillAfterServiceAndTax(TotalBill);

	return 0;
}
