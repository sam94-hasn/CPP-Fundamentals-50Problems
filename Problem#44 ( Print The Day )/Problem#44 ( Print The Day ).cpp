// Problem#44 ( Print The Day ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

enum enDays { Sunday = 1, Monday, Tuesday, Wednsday, Thursday, Friday, Saturday };

int ReadNumberInRange(int From, int To, string Message)
{
	int Mark = 0;
	do
	{
		cout << Message << endl;
		cin >> Mark;


	} while (Mark<From || Mark>To);

	return Mark;
}

enDays ReadDayOfWeek()
{
	return
		(enDays)ReadNumberInRange(1, 7, "Please Enter Day Number ( Between 1 & 7 )");
}

string GetDayName(enDays Day)
{


	switch (Day)
	{

	case enDays::Sunday:
		return  "Sunday";

	case enDays::Monday:
		return 	 "Monday";

	case enDays::Tuesday:
		return "Tuesday";

	case enDays::Wednsday:
		return  "Wednsday";

	case enDays::Thursday:
		return  "Thursday";

	case enDays::Friday:
		return  "Friday";

	case enDays::Saturday:
		return "Saturday";

	default:
		return "Wrong !!";
	}
}

int main()
{
	cout << GetDayName(ReadDayOfWeek()) << endl;
	return 0;
}
