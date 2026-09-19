// Problem#2 (Read Name&Print).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;


void PrintName(string Name)
{
	cout << "\n Your Name is : " << Name << endl;
}

string ReadName()
{
	string Name;
	cout << "\n Please Enter Your Name : ";
	getline(cin, Name);

	return Name;
}

int main()
{
	PrintName(ReadName());

	return 0;
}

