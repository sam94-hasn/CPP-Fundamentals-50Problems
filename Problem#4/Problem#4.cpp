// Problem#4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;

struct stInfo
{
	int Age;
	bool HasDriverLicense;
};

stInfo ReadInfo()
{
	stInfo Info;

	cout << "\nPlease Enter Your Age : ";
	cin >> Info.Age;

	cout << "\nDo You Have A Driver License ? (true=1 / false=0)" << endl;
	cin >> Info.HasDriverLicense;

	return Info;
}

bool IsAccepted(stInfo Info)
{
	return (Info.Age > 21 && Info.HasDriverLicense);
}

void PrintResulr(stInfo Info)
{
	if (IsAccepted(Info))
		cout << "\n  Hierd  \n";
	else
		cout << "\n  Rejected \n";
}


int main()
{
	PrintResulr(ReadInfo());

	return 0;
}
