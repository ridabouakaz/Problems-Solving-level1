#include<iostream>
#include <string>
#include<array>
using namespace std;
//crated function contens range for quarte of  the year 
int mango(int year) {
	if (year > 0 && year <= 3)
	{
		cout << "is part of first quarte";
	}
	else if (year > 3 && year <= 6)
	{
		cout << "is part of second quarte";
	}
	else if (year > 6 && year <= 9)
	{
		cout << "is part of thred quarte";
	}
	else if (year > 9 && year <= 12)
	{
		cout << "is part of fourth  quarte";
	}

	return 0;
}
int main() {
	mango(11);

	return 0;
}
//Given a month as an integer from 1 to 12, return to which quarter of the year it belongs as an integer numbe