#include<iostream>
#include <string>
#include<array>
#include<vector>
// function Multiplication betwin number[i] and number[i+1] and number[i+2]...
using namespace std;
int multiplying(vector<int> numbers)
{
	int result = 1;

	for (int i = 0; i < numbers.size(); i++)
	{

		result *= numbers[i];
	}

	cout << result;

	return 0;
}
int main() {
	vector<int> numbers1 = { 20,0,30,40 };
	multiplying(numbers1);

	return 0;
}
/*Given a non-empty array of integers, return the result of multiplying the values together in order*/