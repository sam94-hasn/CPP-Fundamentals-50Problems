// Problem#48 ( part 2 ).cpp : This file contains the 'main' function. Program execution begins and ends there.
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

float CalculateMonthlyInstallment(float LoanAmount, float HowmanyMonth)
{
	return (LoanAmount / HowmanyMonth);
}

void printResult(float LoanAmount, float HowmanyMonth)
{
	cout << "\n===============\n";

	cout << "\nYou Must Pay Every Month : " << CalculateMonthlyInstallment(LoanAmount, HowmanyMonth) << "$" << endl;

}

int main()
{
	float LoanAmount = ReadNumber("Enter Loan Amount :");
	float HowmanyMonth = ReadNumber("How Many Monthly :");

	printResult(LoanAmount, HowmanyMonth);

	return 0;
}
