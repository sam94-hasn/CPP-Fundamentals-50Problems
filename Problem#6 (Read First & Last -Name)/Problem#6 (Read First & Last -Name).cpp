// Problem#6 (Read First & Last -Name).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;

struct stInfo
{
	string FirstName;
	string MiddleName;
	string LastName;
};

stInfo ReadInfo()
{
	stInfo Info;

	cout << "\nPlease Enter First Name : " << endl;
	cin >> Info.FirstName;

	cout << "\nPlease Enter Middle Name : " << endl;
	cin >> Info.MiddleName;

	cout << "\nPlease Enter Last Name : " << endl;
	cin >> Info.LastName;


	return Info;
}

string GetFullName(const stInfo& Info)
{
	string FullName = "";

	FullName = Info.FirstName + " " + Info.MiddleName + " " + Info.LastName;

	return FullName;
}

void PrintInfo(string FullName)
{
	cout << "\n====================\n";


	cout << "\nYour Full Name is : " << FullName << endl;
}

int main()
{
	PrintInfo(GetFullName(ReadInfo()));
	return 0;
}

