#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;

//  function convert result on string for int
int  sum_str(string number1, string number2) {
	return stoi(number1 == "" ? "0" : number1) + stoi(number2 == "" ? "0" : number2);
}
int main() {
	cout << sum_str("", "42");
	return 0;
}
/*Create a function that takes 2 integers in form of a string as an input, and outputs the sum (also as a string):*/