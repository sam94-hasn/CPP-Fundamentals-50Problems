// Problem#50 (PIN Part 2 ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

string ReadPinCode()
{
	string PIN;
	cout << "Please Enter PIN Code : ";
	cin >> PIN;

	return PIN;
}
bool Login()
{
	string PINCODE;
	int Counter = 3;

	do
	{
		Counter--;
		PINCODE = ReadPinCode();

		if (PINCODE == "1234")
		{
			return 1;
		}
		else
		{
			cout << "\n\nWrong PIN !!!,You have " << Counter << " more true" << endl;
			system("color 4F");
		}

	} while (PINCODE != "1234" && Counter >= 1);

	return 0;
}
int main()
{
	if (Login())
	{
		system("color 2F");

		cout << "\nYour Account Balance is " << 7500 << endl;
	}
	else
	{
		system("color 6F");
		cout << "\nYour card blocked call the bank for help . \n";
	}

	return 0;
}
