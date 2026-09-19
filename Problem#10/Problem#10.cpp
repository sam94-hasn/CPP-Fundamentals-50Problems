// Problem#10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;



void ReadMark(int Mark[100], int& Length)
{
	cout << "How Many The Mark Of Want Entered For Calculated Sum && Average ?" << endl;
	cin >> Length;


	for (int i = 1; i <= Length;i++)
	{
		cout << "Please Enter The Mark Of " << i << " :" << endl;
		cin >> Mark[i];
	}

}


float CalculateSumOfMark(int Mark[100], int Length)
{
	float Sum = 0;
	for (int i = 1; i <= Length;i++)
	{
		Sum = Sum + Mark[i];
	}
	return Sum;
}

float CalculateAverage(int Mark[100], int Length)
{
	return (float)CalculateSumOfMark(Mark, Length) / 3.0;
}

void PrintResult(int Sum, float Avg)
{
	cout << "\nThe Total Sum of The Mark : " << Sum << endl;
	cout << "\nThe Total Avg of The Mark : " << Avg << endl;
}

int main()
{
	int Mark[100];
	int Length;
	ReadMark(Mark, Length);
	PrintResult(CalculateSumOfMark(Mark, Length), CalculateAverage(Mark, Length));
	return 0;
}
