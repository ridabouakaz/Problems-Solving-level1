#include<iostream>
#include <string>
#include<array>
#include<vector>
// function convert string for int or number
using namespace std;
int transform(string numbers = "12345")
{
	int numes;
	for (int i = 0; i < numbers.size(); i++)
	{
		stoi(numbers);
		numbers[i];
	}
	cout << numbers;
	return 0;
}
int main() {
	transform("12345");
	return 0;
}
/*We need a function that can transform a string into a number. What ways of achieving this do you know?*/