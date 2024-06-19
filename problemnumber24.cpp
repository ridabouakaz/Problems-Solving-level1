#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
// function mathematical operations Divide them string 
int  mathematicaloperations(string opera, int num1, int num2) {
	if (opera == "+")
	{
		return num1 + num2;
	}
	else if (opera == "-")
	{
		return num1 - num2;
	}
	else if (opera == "*")
	{
		return num1 * num2;
	}
	else if (opera == "/")
	{
		return num1 / num2;
	}
}
int main() {
	cout << mathematicaloperations("-", 15, 18);
	return 0;
}
/*Your task is to create a function that does four basic mathematical operations.
The function should take three arguments - operation(string/char), value1(number), value2(number).
The function should return result of numbers after applying the chosen operation.*/