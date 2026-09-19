// Problem#35 ( Total Penny ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


struct stPiggyBankContenet
{
	float Penny, Nickel, Dime, Quarter, Dollar;


};

int ReadNumber(string Message)
{
	int Num = 0;

	do
	{
		cout << Message;
		cin >> Num;

	} while (Num < 0);

	return Num;

}

stPiggyBankContenet GetValues()
{
	stPiggyBankContenet PiggyBankContenet;

	PiggyBankContenet.Penny = ReadNumber("Enter A Total Penny : ");
	PiggyBankContenet.Nickel = ReadNumber("Enter A Total Nickel : ");
	PiggyBankContenet.Dime = ReadNumber("Enter A Total Dime : ");
	PiggyBankContenet.Quarter = ReadNumber("Enter A Total Quarter : ");
	PiggyBankContenet.Dollar = ReadNumber("Enter A Total Dollar : ");

	return PiggyBankContenet;

}

float CalculateTotalPennys(stPiggyBankContenet Info)
{

	float TotalPenny = 0;

	TotalPenny = (1 * Info.Penny) + (5 * Info.Nickel) + (10 * Info.Dime) + (25 * Info.Quarter) + (100 * Info.Dollar);

	return TotalPenny;

}

float CalculateTotalDollars(stPiggyBankContenet Info)
{
	float TotalDollar = 0;

	TotalDollar = CalculateTotalPennys(Info) / 100;

	return TotalDollar;
}




int main()
{
	stPiggyBankContenet Info;
	Info = GetValues();

	cout << "\nTtoal Pennies  = " << CalculateTotalPennys(Info) << endl;
	cout << "Total Dollars = " << CalculateTotalDollars(Info) << endl;

	return 0;
}
