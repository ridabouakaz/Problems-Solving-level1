#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
// function convert first value to seconde value
int     numbermakeitnegative(pair<int, int>values) {
	int mtv = values.first;
	values.first = values.second;
	values.second = mtv;
	return values;
}
int main() {
	numbermakeitnegative({ 20,30 });
	return 0;
}
/*I would like to be able to pass an array with two elements to my swapValues function to swap the values. However it appears that the values aren't changing.

Can you figure out what's wrong here?
Debugging
Arrays
Fundamentals*/