#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
// function Contains loop for delete last and first characters 

int transform(string numbers)
{
	string word;
	for (int i = 1; i < numbers.size() - 1; i++)
	{
		word += numbers[i];
	}
	cout << word;
	return 0;
}
int main() {
	transform("the first day");
	return 0;
}
/*It's pretty straightforward. Your goal is to create a function that removes the first and last characters of a string.
You're given one parameter, the original string. You don't have to worry about strings with less than two characters.*/