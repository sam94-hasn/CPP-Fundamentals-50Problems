// Problem#38 ( Prime Number ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

enum enPrime { Prime = 1, NotPrime };

void ReadNumberForCheck(int Num[100], int& Length)
{

	cout << "Please Enter The Numer Of Diditd You Want To Check Are Prime : " << endl;
	cin >> Length;

	for (int i = 0;i < Length;i++)
	{

		cout << "Enter Number [" << i + 1 << "]" << " = ";
		cin >> Num[i];

		if (Num[i] <= 0)
		{
			cout << "Error :: Please Try Again ! " << endl;
			i--;
			continue;
		}

	}



}

enPrime CheckPrime(int Number )
{
	if (Number == 1)
		return enPrime::NotPrime;

	for (int j = 2;j <= Number / 2;j++)
	{
		

		  if (Number % j == 0)
			return enPrime::NotPrime;

	}

	return enPrime::Prime;

}

void PrintResult(int Num[100], int Length)
{
	int Choice = 0;

	for (int i = 0;i < Length;i++)
	{
		Choice = CheckPrime(Num[i]);
 

		if (Choice == enPrime::Prime)
		{
			cout << "\nThe Number ( " << Num[i] << " )" << ": is Prime" << endl;

		}

		else if (Choice == enPrime::NotPrime)

			cout << "\nThe Number ( " << Num[i] << " )" << ": is Not Prime" << endl;

	}
}

int main()
{
	int Number[100];
	int Length = 0;

	ReadNumberForCheck(Number, Length);
	PrintResult(Number, Length);

	return 0;

}


