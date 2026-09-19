// Problem#34 ( Restaurant Bill ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;

float ReadTotalSale(string Message)
{
	float TotalSale;

	do
	{
		cout << Message;
		cin >> TotalSale;


	} while (TotalSale < 0);

	return TotalSale;

}

float GetCommissionPercentage(float TotalSale)
{
	if (TotalSale >= 1000000)
		return 0.01;

	else if (TotalSale >= 500000)
		return 0.02;

	else if (TotalSale >= 100000)
		return 0.03;

	else if (TotalSale >= 50000)
		return 0.05;

	else
		return 0.00;
}

float CalculateTotalCommission(float TotalSale, float Percentage)
{

	return (TotalSale * Percentage);

}

void PrintValue(float TotalSale, float Percentage, float Commission)
{

	cout << "\nCommission Percentage = " << Percentage << endl;
	cout << "Total Commission  =  " << Commission << endl;
}

int main()
{
	float TotalSale, Percentage, Commission;

	TotalSale = ReadTotalSale("Please Enter A Total Sale  : ");
	Percentage = GetCommissionPercentage(TotalSale);
	Commission = CalculateTotalCommission(TotalSale, Percentage);

	PrintValue(TotalSale, Percentage, Commission);

	return 0;
}
