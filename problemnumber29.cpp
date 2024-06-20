#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
// function contains loop for plus number with other , in final division on sum to value to array
double     averageofthenumbers(vector<int> numbers) {
	if (numbers.size() == 0)
	{
		cout << "0";
	}
	double result = 1;
	for (int i = 0; i < numbers.size(); i++)
	{
		result += numbers[i];
	}
	double resulttotal = result / numbers.size();
	cout << resulttotal;

	return 0;
}
double main() {
	averageofthenumbers({});
	return 0;
}
/*Write a function which calculates the average of the numbers in a given list.

Note: Empty arrays should return 0.
*/