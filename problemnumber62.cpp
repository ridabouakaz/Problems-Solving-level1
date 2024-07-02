#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//  function Generates an array of numbers that are less than number
vector<int> reverseSeq(int number) {
	vector<int>number1;
	for (int i = number; i > 0; i--)
	{
		number1.push_back(i);
	}
	return number1;
}
int main() {
	reverseSeq(5);
	return 0;
}
/*Build a function that returns an array of integers from n to 1 where n>0.

Example : n=5 --> [5,4,3,2,1]

*/