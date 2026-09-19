// Problem#41 ( Hours By Weeks&&Days ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


float ReadPositiveNumber(string Message)
{
	float Num = 0;

	do
	{
		cout << Message << endl;
		cin >> Num;


	} while (Num <= 0);

	return Num;
}

float HoursToDays(float NumOfHours)
{

	return (float)NumOfHours / 24;
}

float DaysToWeeks(float NumOfDays)
{

	return (float)NumOfDays / 7;

}

void PrintResult(float NumOfHours, float NumOfDays, float NumOfWeeks)
{

	cout << "\n=========================\n";

	cout << "Total Hours = " << NumOfHours << endl;
	cout << "Total Days = " << NumOfDays << endl;
	cout << "Total Weeks = " << NumOfWeeks << endl;
}

int main()
{
	float NumberOfHours = ReadPositiveNumber("Please Enter The Number Of Hours : ");
	float NumberOfDays = HoursToDays(NumberOfHours);
	float NumberOfWeeks = DaysToWeeks(NumberOfDays);

	PrintResult(NumberOfHours, NumberOfDays, NumberOfWeeks);

	return 0;
}