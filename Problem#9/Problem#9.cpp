// Problem#9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void ReadNum(int Number[100], int& Length)
{
	cout << "How Many The Number Of Want Entered For Sum ?" << endl;
	cin >> Length;


	for (int i = 1; i <= Length;i++)
	{
		cout << "Please Enter The Number Of " << i << " :" << endl;
		cin >> Number[i];
	}

}

int SumOf3Number(int Number[100], int Length)
{
	int Sum = 0;
	for (int i = 1; i <= Length;i++)
	{
		Sum = Sum + Number[i];
	}
	return Sum;
}

void PrintResult(int Total)
{
	cout << "\nThe Total Sum of The Number : " << Total << endl;
}

int main()
{
	int Number[100];
	int Length;

	ReadNum(Number, Length);
	PrintResult(SumOf3Number(Number, Length));

	return 0;

}
