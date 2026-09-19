// Problem#10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

enum enResult { PASS = 1, FAIL };

void ReadMark(int Mark[100], int& Length)
{
	cout << "How Many The Mark Of Want Entered For Calculated Average And Print Result. ?" << endl;
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
	return (float)CalculateSumOfMark(Mark, Length) / 3;
}

enResult CheckAvg(float Avg)
{
	if (Avg >= 50)
		return  enResult::PASS;
	else
		return enResult::FAIL;
}

void PrintResult(float Avg)
{

	cout << "\nThe Total Avg of The Mark : " << Avg << endl;

	if (CheckAvg(Avg)==enResult::PASS)
		cout << "\nResult Is : PASSED \n";
	else
		cout << "\nResult Is : FAILED \n";
}


int main()
{
	int Mark[100];
	int Length;

	ReadMark(Mark, Length);
	PrintResult(CalculateAverage(Mark, Length));


	return 0;
}
