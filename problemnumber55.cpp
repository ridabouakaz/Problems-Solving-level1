#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;

//  function continas loop for add i and Multiplication with numbers
int  multiplicationtable(int number) {
	for (int i = 1; i <= 10; i++)
	{
		int result = number * i;
		cout << i << " * " << number << "= " << result << "\n";
	}
	return 0;
}
int main() {
	multiplicationtable(1);
	return 0;
}
/*Your goal is to return multiplication table for number that is always an integer from 1 to 10.

For example, a multiplication table (string) for number == 5 looks like below*/