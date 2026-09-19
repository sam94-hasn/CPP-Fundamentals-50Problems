// Problem#46 ( Print All Letters ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

void PrintAllLetter(char From, char To)
{
	for (char i = From;i <= To;i++)
	{
		cout << i << endl;

	}
}

int main()
{
	PrintAllLetter('A', 'Z');
	return 0;
}
