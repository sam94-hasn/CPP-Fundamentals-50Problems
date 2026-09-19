// Problem#33 ( Grade Letter ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;

int ReadNumberInRange(int From, int To,string Message)
{
	int Mark = 0;
	do
	{
		cout << Message << endl;
		cin >> Mark;


	} while (Mark<From || Mark>To);

	return Mark;
}

string GetGradeLetter(int Mark)
{
	if (Mark >= 90)
		return "A";
	else if (Mark >= 80)
		return "B";
	else if (Mark >= 70)
		return "C";
	else if (Mark >= 60)
		return "D";
	else if (Mark >= 50)
		return "E";
	else
		return "F";

}

int main()
{

	//cout << endl << "Result = " << GetGradeLetter(ReadNumberInRange(0, 100));

	int Mark = ReadNumberInRange(0,100, "Please Enter Yor Mark ?? (Between 0 To 100 ) : ");
	cout << endl << "Result = " << GetGradeLetter(Mark) << endl;

	return 0;
}

