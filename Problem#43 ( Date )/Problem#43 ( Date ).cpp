// Problem#43 ( Date ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;

struct stTaskDuration
{
	int NumOfDays, NumOfHours, NumOfMinutes, NumOfSeconds;

};

int ReadNumber(string Message)
{
	int Num = 0;

	do
	{
		cout << Message << endl;
		cin >> Num;


	} while (Num <= 0);

	return Num;
}

int SecondsPerDay()
{
	return   24 * 60 * 60;
}

int SecondsPerHour()
{
	return    60 * 60;
}

int SecondsPerMinute()
{
	return  60;
}

stTaskDuration SecondsToTaskDuration(int TotaSeconds)
{

	stTaskDuration TaskDuration;
	int Remainder = TotaSeconds;

	TaskDuration.NumOfDays = Remainder / SecondsPerDay();
	Remainder = Remainder % SecondsPerDay();

	TaskDuration.NumOfHours = Remainder / SecondsPerHour();
	Remainder = Remainder % SecondsPerHour();

	TaskDuration.NumOfMinutes = Remainder / SecondsPerMinute();


	TaskDuration.NumOfSeconds = Remainder % SecondsPerMinute();

	return TaskDuration;

}

void PrintTaskDuration(stTaskDuration TaskDuration)
{
	cout << "\n=========================\n";

	cout << TaskDuration.NumOfDays << ":"
		<< TaskDuration.NumOfHours << ":"
		<< TaskDuration.NumOfMinutes << ":"
		<< TaskDuration.NumOfSeconds << endl;

}

int main()
{

	int TotalSeconds = ReadNumber("Please Enter Total Seconds : ");

	PrintTaskDuration(SecondsToTaskDuration(TotalSeconds));

	return 0;
}
