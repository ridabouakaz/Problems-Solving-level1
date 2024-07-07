#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<string>
using namespace std;
// function the first element is the count of positives numbers and the second element is sum of negative numbers. 0 is neither positive nor negative.
vector<int> countPositivesSumNegatives(vector<int> input)
{
	vector<int>result3;
	int result1 = 0;
	int result2 = 0;
	if (input.size() == 0) {}
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] > 0)
		{
			result1++;
		}
		else if (input[i] == 0)
		{
			continue;
		}
		else
		{
			result2 += input[i];
		}

	}
	result3.push_back(result1);
	result3.push_back(result2);
	return result3;
}
int main() {
	countPositivesSumNegatives();
	return 0;
}
/*Given an array of integers.

Return an array, where the first element is the count of positives numbers and the second element is sum of negative numbers. 0 is neither positive nor negative.

If the input is an empty array or is null, return an empty array.
Example

For input [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15], you should return [10, -65].
*/