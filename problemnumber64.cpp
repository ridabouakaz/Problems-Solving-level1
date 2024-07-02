#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//  function clacul sum to numbers array witout first and last value
int sum(vector<int>numbers) {
	int result = 0;
	sort(numbers.begin(), numbers.end());
	for (int i = 1; i < numbers.size() - 1; i++)
	{
		result += numbers[i];
	}
	cout << result;
	return 0;
}
int main() {
	sum({ 6, 2, 1, 8, 10 });
	return 0;
}
/*Sum all the numbers of a given array ( cq. list ), except the highest and the lowest element ( by value, not by index! ).

The highest or lowest element respectively is a single element at each edge, even if there are more than one with the same value.

Mind the input validation.
*/