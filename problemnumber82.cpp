#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

//  function  return a list of all the powers of 2 with the exponent ranging from 0 to n ( inclusive )..
vector<uint64_t> powers_of_two(int n) {
	vector<uint64_t> result;
	for (int i = 0; i <= n; i++)
	{
		result.push_back(pow(2, i));
	}
	return result;
}
int main() {
	powers_of_two(2);
	return 0;
}
/*Complete the function that takes a non-negative integer n as input, and returns a list of all the powers of 2 with the exponent ranging from 0 to n ( inclusive ).*/