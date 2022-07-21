// LUUModule01Chapter03FactorsDisplay.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	auto num{ 0 };
	cout << "Please enter a integer: ";
	cin >> num;

	cout << "the factor of " << num << endl;

	for (auto i{ 1 }; i <= num; ++i)
	{
		if (num % i == 0)
		{
			cout << i << endl;
		}
	}
}