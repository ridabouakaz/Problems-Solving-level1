#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

//  function  clacul summation of every number from 1 to num
int summation(int num) {
	int result = 0;
	for (int i = 0; i <= num; i++)
	{
		result += i;
	}
	return result;
}
int main() {
	cout << summation(8);
	return 0;
}
/*Write a program that finds the summation of every number from 1 to num. The number will always be a positive integer greater than 0. Your function only needs to return the result, what is shown between parentheses in the example below is how you reach that result and it's not part of it, see the sample tests.

For example (Input -> Output):

2 -> 3 (1 + 2)
8 -> 36 (1 + 2 + 3 + 4 + 5 + 6 + 7 + 8)
*/