// Problem#42 ( Numbers Of Seconds ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

struct stTimeDuration
{
	int NumOfDays, NumOfHours, NumOfMinutes, NumOfSecond;

};

int ReadPositiveNumber(string Message)
{
	int Num = 0;

	do
	{
		cout << Message << endl;
		cin >> Num;


	} while (Num < 0);

	return Num;
}

stTimeDuration ReadTaskDuration()
{
	stTimeDuration TaskDuration;

	TaskDuration.NumOfDays = ReadPositiveNumber("Enter Numbers Of NumOfDays : ");
	TaskDuration.NumOfHours = ReadPositiveNumber("Enter Numbers Of NumOfHours : ");
	TaskDuration.NumOfMinutes = ReadPositiveNumber("Enter Numbers Of NumOfMinutes : ");
	TaskDuration.NumOfSecond = ReadPositiveNumber("Enter Numbers Of Seconds : ");

	return TaskDuration;
}

float SecondsPerDays(float NumOfDays)
{
	return NumOfDays * 24 * 60 * 60;
}

float SecondsPerHours(float Hours)
{
	return Hours * 60 * 60;
}

float SecondsPerMinutes(float Minutes)
{
	return Minutes * 60;
}

float CalculateTotalSeconds(stTimeDuration TimeDate)
{

	return

		SecondsPerDays(TimeDate.NumOfDays) + SecondsPerHours(TimeDate.NumOfHours) + SecondsPerMinutes(TimeDate.NumOfMinutes) + TimeDate.NumOfSecond;


}

void PrintResult(stTimeDuration TimeDate)
{
	cout << "\n====================\n";

	cout << "Total Seconds = " << CalculateTotalSeconds(TimeDate) << endl;

}

int main()
{
	stTimeDuration Info = ReadTaskDuration();

	PrintResult(Info);

	return 0;
}
