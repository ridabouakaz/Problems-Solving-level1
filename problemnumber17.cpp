#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
// function  repeated string As much as n each time
int repeated(string numbers, int n)
{
	string word;
	for (int i = 0; i < n; i++)
	{
		word += numbers;
	}
	cout << word;
	return 0;
}
int main() {
	repeated(" the first day", 4);
	return 0;
}
/*Write a function that accepts an integer n and a string s as parameters, and returns a string of s repeated exactly n times.
Examples (input -> output)*/