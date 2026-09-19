// Problem#47 ( LoanAmount ).cpp : This file contains the 'main' function. Program execution begins and ends there.
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

float CalculateTotalMonths(float LoanAmount, float MonthlyInstall)
{
	return float(LoanAmount / MonthlyInstall);
}

void printResult(float LoanAmount, float MonthlyInstall)
{
	cout << "\n===============\n";

	cout << "Total Month To Pay = " << CalculateTotalMonths(LoanAmount, MonthlyInstall) << endl;

}

int main()
{
	float LoanAmount = ReadNumber("Please Enter Loan Amount :");
	float MonthlyInstallment = ReadNumber("Please Enter Monthly Installment :");

	printResult(LoanAmount, MonthlyInstallment);

	return 0;
}
