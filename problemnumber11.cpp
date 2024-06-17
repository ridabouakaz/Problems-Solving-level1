#include<iostream>
#include <string>
#include<array>
#include<vector>

using namespace std;
//crated function  
int FindMaximumMinimum(vector<int>numbers) {
	int Maximum = 0;
	int Minimum = numbers[0];
	for (int i = 0; i < numbers.size(); i++)
	{
		if (numbers[i] > Maximum)
		{
			Maximum = numbers[i];
		}

		else if (numbers[i] < Minimum)
		{
			Minimum = numbers[i];
		}

	}
	cout << Maximum << "\n" << Minimum;

	return 0;
}
int main() {

	FindMaximumMinimum({ 20,-30,60,30,40 });

	return 0;
}
/*Your task is to make two functions ( max and min, or maximum and minimum, etc., depending on the language ) that receive a list of integers as input,
and return the largest and lowest number in that list, respectively.*/