#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;

//  function that returns (0-9) as an integer
int  get_age(string she_said) {
	return she_said[0] - '0';

}
int main() {
	cout << get_age("5 years old");
	return 0;
}
/*You ask a small girl,"How old are you?" She always says, "x years old", where x is a random number between 0 and 9.

Write a program that returns the girl's age (0-9) as an integer.

Assume the test input string is always a valid string. For example, the test input may be "1 year old" or "5 years old". The first character in the string is always a number.
*/