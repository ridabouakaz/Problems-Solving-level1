#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
// the function new list so that the values increment by 1 for each index from the minimum value up to the maximum value (both included).	
vector<int> pipe_fix(vector<int> nums) {
	sort(nums.begin(), nums.end());
	int minvalue = nums.front();
	int maxvalue = nums.back();
	vector<int> result;
	for (int i = minvalue; i <= maxvalue; i++)
	{
		result.push_back(i);
	}


	return result;
}

int main() {
	cout << rental_car_cost(4);
	return 0;
}

/*Issue

Looks like some hoodlum plumber and his brother has been running around and damaging your stages again.

The pipes connecting your level's stages together need to be fixed before you receive any more complaints.

The pipes are correct when each pipe after the first is 1 more than the previous one.
Task

Given a list of unique numbers sorted in ascending order, return a new list so that the values increment by 1 for each index from the minimum value up to the maximum value (both included).
Example

Input:  1,3,5,6,7,8 Output: 1,2,3,4,5,6,7,8
*/