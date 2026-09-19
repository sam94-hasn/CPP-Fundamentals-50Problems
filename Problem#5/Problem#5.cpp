// Problem#5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;

struct stInfo
{
	int Age;
	bool HasDriverLicense;
	bool HasRecommendation;

};

stInfo ReadInfo()
{
	stInfo Info = { 0,false,false };

	cout << "\nDo You Have a Recommendation ? " << endl;
	cin >> Info.HasRecommendation;
	//if (Info.HasRecommendation) return Info;		في حال اذا امتلك توصية لا يتم سؤاله عن عمره و شهادة القيادة 

	cout << "\nPlease Enter Your Age : " << endl;
	cin >> Info.Age;

	cout << "\nDo You Have a Driver License ?" << endl;
	cin >> Info.HasDriverLicense;

	return Info;

}

bool IsAccepted(stInfo Info)
{
	if (Info.HasRecommendation)
		return true;
	else
		return (Info.Age > 21 && Info.HasDriverLicense);
}

void PrintResult(stInfo Info)
{
	if (IsAccepted(Info))
		cout << "\n Hired \n";
	else
		cout << "\n Rejected \n";
}

int main()
{
	PrintResult(ReadInfo());
	
	return 0;
}
