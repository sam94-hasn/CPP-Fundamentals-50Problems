// Problem#49 ( Read PIN).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

string ReadPinCode()
{

	string PIN;
	cout << "Please Enter PIN Code :\n";
	cin >> PIN;

	return PIN;
}

bool Login()
{
	string PIN;

	do
	{
		PIN = ReadPinCode();

		if (PIN == "1234")
		{
			return 1;
		}
		else
		{
			cout << "\nWrong PIN\n\n";
			 
				system("color 4F");
 		}
		

	} while (PIN != "1234");

	return 0;
}
int main()
{
	if (Login())
	{
		system("color 2F");
		cout << "\nYour Account Balance is " << 7500 << endl;
	}

	return 0;
}
