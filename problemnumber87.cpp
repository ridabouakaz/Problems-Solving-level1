#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<string>
using namespace std;
// function hotpo that takes a positive n as input and returns the number of times you need to perform this algorithm to get n = 1..
unsigned int hotpo(unsigned int n) {
	int result = 0;
	while (n != 1)
	{
		if (n % 2 == 0)
		{
			n = n / 2;
		}
		else if (n % 2 == 1)
		{
			n = 3 * n + 1;
		}
		result++;
	}
	return result;
}
int main() {
	cout << hotpo(6);
	return 0;
}
/*The Collatz conjecture (also known as 3n+1 conjecture) is a conjecture that applying the following algorithm to any number we will always eventually reach one:

[This is writen in pseudocode]
if(number is even) number = number / 2
if(number is odd) number = 3*number + 1

#Task

Your task is to make a function hotpo that takes a positive n as input and returns the number of times you need to perform this algorithm to get n = 1.

#Examples

hotpo(1) returns 0
(1 is already 1)

hotpo(5) returns 5
5 -> 16 -> 8 -> 4 -> 2 -> 1

hotpo(6) returns 8
6 -> 3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1

hotpo(23) returns 15
23 -> 70 -> 35 -> 106 -> 53 -> 160 -> 80 -> 40 -> 20 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1

*/