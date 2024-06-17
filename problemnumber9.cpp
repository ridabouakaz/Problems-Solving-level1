#include<iostream>
#include <string>
#include<array>
#include<vector>

using namespace std;
//crated function contens condition for type number and how deal with hem 
int inverse(vector<int> numbers) {
	int result;
	for (int i = 0; i < numbers.size(); i++)
	{
		if (numbers[i] > 0)
		{
			result = numbers[i] * -1;
		}
		else if (numbers[i] < 0)
		{
			result = numbers[i] * -1;
		}
		else if (numbers[i] == NULL)
		{
			result = int(char('97'));
		}
		cout << result << "\n";

	}



	return 0;
}
int main() {
	vector<int> numes = { -20,0,10,40 };
	inverse(numes);

	return 0;
}
//Given a set of numbers, return the additive inverse of each. Each positive becomes negatives, and the negatives become positives.