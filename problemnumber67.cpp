#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//  function calcul sum all number positive	
int positive_sum(vector<int>numbers) {
	int result = 0;
	for (int i = 0; i < numbers.size(); i++)
	{
		if (numbers[i] > 0)
		{
			result += numbers[i];
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
	positive_sum({ -1,-2,-3,-4,-5 });
	return 0;
}
/*You get an array of numbers, return the sum of all of the positives ones.

Example [1,-4,7,12] => 1 + 7 + 12 = 20

Note: if there is nothing to sum, the sum is default to 0.
*/