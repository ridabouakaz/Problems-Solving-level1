#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
// function convert number positive to negative
int     numbermakeitnegative(int num1) {
	return num1 <= 0 ? num1 : num1 * -1;

}
int main() {
	cout << numbermakeitnegative(-2);
	return 0;
}
/*In this simple assignment you are given a number and have to make it negative. But maybe the number is already negative?*/
