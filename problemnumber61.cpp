#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//  function sort array and declar smaller words and add ***
string two_sort(vector < string >s) {
	sort(s.begin(), s.end());
	string result = s.at(0);
	for (int i = 0; i < result.size(); i++)
	{
		if (i < result.size() - 1)
		{
			cout << result[i] << "***";
		}
		else
		{
			cout << result[i];
		}
	}
	return 0;
}
int main() {
	two_sort({ "turns", "out", "random", "test", "cases", "are", "easier", "than", "writing", "out", "basic", "ones" });
	return 0;
}
/*You will be given a list of strings. You must sort it alphabetically (case-sensitive, and based on the ASCII values of the chars) and then return the first value.

The returned value must be a string, and have "***" between each of its letters.

You should not remove or add elements from/to the array.
*/