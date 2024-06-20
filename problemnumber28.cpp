#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
// function  move down number -1 if number <13 and move down by two number if number>13 
int    returnthenumber(int num1) {
	if (num1 <= 0)
	{
		cout << num1;
	}
	else if (num1 < 13)
	{
		cout << num1 - 1;
	}
	else
	{
		cout << num1 - 2;
	}
	return 0;
}
int main() {
	returnthenumber(5);
	return 0;
}
/*Americans are odd people: in their buildings, the first floor is actually the ground floor and there is no 13th floor (due to superstition).

Write a function that given a floor in the american system returns the floor in the european system.

With the 1st floor being replaced by the ground floor and the 13th floor being removed, the numbers move down to take their place. In case of above 13, they move down by two because there are two omitted numbers below them.

Basements (negatives) stay the same as the universal level.*/