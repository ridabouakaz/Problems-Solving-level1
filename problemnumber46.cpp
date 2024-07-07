#include<iostream>
#include <string>
#include<algorithm>
#include<vector>
using namespace std;


//  function sum the differences between consecutive pairs in the array	
int  sumdifferencesbetween(vector<int>numbers) {
	sort(numbers.rbegin(), numbers.rend());
	int result = 0;
	if (numbers.size() <= 1)
	{
		return result = 0;
	}
	else
	{
		for (int i = 0; i < numbers.size() - 1; i++)
		{
			result += numbers[i] - numbers[i + 1];
		}
		return result;
	}

}
int main() {
	cout << sumdifferencesbetween({ 2, 1, 10 });
	return 0;
}
/*Your task is to sum the differences between consecutive pairs in the array in descending order.
Example

[2, 1, 10]  -->  9

In descending order: [10, 2, 1]

Sum: (10 - 2) + (2 - 1) = 8 + 1 = 9

If the array is empty or the array has only one element the result should be 0 (Nothing in Haskell, None in Rust).
*/
