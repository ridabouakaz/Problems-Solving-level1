#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;

//  function convert int for string and Multiplication -1
string  opposite(int number) {
	return to_string(number) + " : " + to_string(-1 * number);
}
int main() {
	cout << opposite(-34);
	return 0;
}
/*Very simple, given a number (integer / decimal / both depending on the language), find its opposite (additive inverse).*/