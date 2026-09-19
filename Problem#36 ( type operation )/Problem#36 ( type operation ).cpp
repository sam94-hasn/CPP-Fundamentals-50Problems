// Problem#36 ( type operation ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;

enum enOperationType { Add = '+', Subtract = '-', Multply = '*', Divide = '/' };

float ReadNumber(string Message)
{
	float Num = 0;
	cout << Message;
	cin >> Num;

	return Num;

}

enOperationType ReadOpType()
{
	char Oper = '+';

	cout << "Enter A Operation Type ( +,-,*,/ ) : " << endl;
	cin >> Oper;

	return (enOperationType)Oper;

}

float CalculateResult(float Num1, float Num2, enOperationType OpType)
{
	switch (OpType)
	{
	case enOperationType::Add:
		return Num1 + Num2;
	case enOperationType::Subtract:
		return Num1 - Num2;
	case enOperationType::Multply:
		return Num1 * Num2;
	case enOperationType::Divide:
	{
		while (Num2 == 0)
		{
			cout << "You Can Not Dividing on Zero || Enter Again please : " << endl;
			cin >> Num2;
		}
		return Num1 / Num2;
	}
	default:
		return 	 0;
	}

}

void PrintResult(float Num1, float Num2, enOperationType OpType)
{
	cout << "\n===========================\n";

	cout << "\nResult = " << CalculateResult(Num1, Num2, OpType) << endl;
}

int main()
{
	float Num1, Num2;
	enOperationType OpType;

	Num1 = ReadNumber("Enter A Number [1] : ");
	Num2 = ReadNumber("Enter A Number [2] : ");

	OpType = ReadOpType();

	PrintResult(Num1, Num2, OpType);

	return 0;

}

