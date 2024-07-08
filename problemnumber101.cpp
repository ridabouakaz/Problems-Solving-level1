#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
//  function takes two arguments and returns all numbers which are divisible by the given divisor.
vector<int> divisible_by(vector<int> numbers, int divisor)
{
	vector<int>result;
	for (int i = 0; i < numbers.size(); i++)
	{
		if (numbers[i] % divisor == 0)
		{
			result.push_back(numbers[i]);
		}
		else
		{
			continue;
		}
	}


	return result;
}

int main() {
	divisible_by({ 1, 2, 3, 4, 5, 6 }, 2);
	return 0;
}

/*Complete the function which takes two arguments and returns all numbers which are divisible by the given divisor. First argument is an array of numbers and the second is the divisor.
Example(Input1, Input2 --> Output)

[1, 2, 3, 4, 5, 6], 2 --> [2, 4, 6]

*/