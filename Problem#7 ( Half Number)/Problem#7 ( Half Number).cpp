// Problem#7 ( Half Number).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

int  ReadNumber()
{
	int Num;

	cout << "\nPlease Enter anu Number : " << endl;
	cin >> Num;
	return Num;
}

float CalculateHalfNum(int Num)
{
	return (float)Num / 2;
}


void PrintResult(int Num)
{
	string Result = "\nHalf of " + to_string(Num) + " is " + to_string(CalculateHalfNum(Num));
	cout << Result << endl;
}


int main()
{
	PrintResult(ReadNumber());
	return 0;
}
