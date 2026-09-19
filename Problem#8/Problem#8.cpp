// Problem#8.cpp : This file contains  the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;

enum enStaute { PASS = 1, FAIL };

int ReadMark()
{
	int Mark;
	cout << "\nPlease Enter Your Mark : " << endl;
	cin >> Mark;
	return (float)Mark;
}

enStaute CheckMark(int Mark)
{

	if (Mark >= 50)
		return 	enStaute::PASS;
	else
		return enStaute::FAIL;
}

void PrintResult(int Mark)
{
	if (CheckMark(Mark) == enStaute::PASS)
		cout << "\nYou Pass " << endl;
	else
		cout << "\nYou Failed " << endl;
}

int main()
{
	PrintResult(ReadMark());
	return 0;
}
