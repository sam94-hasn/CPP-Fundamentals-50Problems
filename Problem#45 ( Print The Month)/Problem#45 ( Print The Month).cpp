// Problem#45 ( Print The Month).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

enum enMonths
{
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};

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

enMonths ReadMonthOfYear()
{
	return
		(enMonths)ReadNumberInRange(1, 12, "Please Enter a Month [1 To 12]");
}

string GetMonthName(enMonths Month)
{ 
	switch (Month)
	{
	case January:
		return  "January";

	case February:
		return  "February";

	case March:
		return  "March";

	case April:
		return  "April";

	case May:
		return "May";

	case June:
		return  "June";

	case July:
		return  "July";

	case August:
		return  "August";

	case September:
		return "September";

	case October:
		return  "October";

	case November:
		return  "November";

	case December:
		return  "December";

	default:
		return "Wrong !!";

	}

}

int main()
{
	cout << GetMonthName(ReadMonthOfYear()) << endl;


	return 0;
}

