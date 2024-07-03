#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//  function declared result and comparison the next value
int findSmallest(vector<int>numbers) {
	int result = numbers.at(0);
	for (int i = 0; i < numbers.size(); i++)
	{
		if (numbers[i] < result)
		{
			result = numbers[i];
		}
		else
		{
			continue;
		}
	}

	cout << result;

	return 0;
}
int main() {
	findSmallest({ 12,0,-27 });
	return 0;
}
/*Given an array of integers your solution should find the smallest integer.

For example:

	Given [34, 15, 88, 2] your solution will return 2
	Given [34, -345, -1, 100] your solution will return -345

You can assume, for the purpose of this kata, that the supplied array will not be empty.
*/