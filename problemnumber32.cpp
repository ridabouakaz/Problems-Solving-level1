#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
// function type to drink for pepoly
int     drink(int num1) {
	if (num1 < 14)
	{
		cout << "drink toddy";
	}
	else if (num1 < 18)
	{
		cout << "drink coke";

	}
	else if (num1 < 21)
	{
		cout << "drink beer";

	}
	else
	{
		cout << "drink whisky";

	}
	return 0;
}
int main() {
	drink(30);
	return 0;
}
/*
	Kids drink toddy.
	Teens drink coke.
	Young adults drink beer.
	Adults drink whisky.

Make a function that receive age, and return what they drink.

Rules:

	Children under 14 old.
	Teens under 18 old.
	Young under 21 old.
	Adults have 21 or more.
*/
