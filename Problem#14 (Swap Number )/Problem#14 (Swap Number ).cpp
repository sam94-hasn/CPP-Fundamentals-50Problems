// Problem#14 (Swap Number ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

struct stNumber
{
	int Number1 = 0;
	int Number2 = 0;


};

stNumber ReadNumber()
{
	stNumber Info;

	cout << "Please Enter The Number[1] : " << endl;
	cin >> Info.Number1;

	cout << "Please Enter The Number[2] : " << endl;
	cin >> Info.Number2;

	cout << "\n-----------------------------\n";

	return Info;
}

void SwapOf_2Number(stNumber& Info)
{
	int Temp;

	Temp = Info.Number1;
	Info.Number1 = Info.Number2;
	Info.Number2 = Temp;


}

void SwapAndPrint(stNumber Info)
{
	cout << "\nNumber [1] == " << Info.Number1;
	cout << "\nNumber [2] == " << Info.Number2 << endl;

	SwapOf_2Number(Info);
	cout << "\nAfter Swap   : " << endl;
	cout << "\nNumber [1] == " << Info.Number1 << endl;
	cout << "\nNumber [2] == " << Info.Number2 << endl;


}

int main()
{

	SwapAndPrint(ReadNumber());
}
