// Problem#24 (check Age ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;

int ReadAge()
{
	int Age;

	cout << "Please Enter Your Age : " << endl;
	cin >> Age;

	return Age;
}

bool  Validate_Number_InRange(int Number, int From, int To)
{
	return (Number >= From && Number <= To);
}

void PrintStatus(int Age)
{

	if (Validate_Number_InRange(Age, 18, 45))
		cout << "is a Vaild age \n";
	else
		cout << "is a Invaild age \n";
}

int main()
{

	PrintStatus(ReadAge());

	return 0;

}
