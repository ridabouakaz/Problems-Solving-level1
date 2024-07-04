#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

//  function we are passing a number (n) into a function.Your code will determine if the number passed is even (or not)
bool is_even(double n) {
	return fmod(n, 2) == 0;
}
int main() {
	cout << is_even(0);
	return 0;
}
/*In this Kata we are passing a number (n) into a function.

Your code will determine if the number passed is even (or not).

The function needs to return either a true or false.

Numbers may be positive or negative, integers or floats.

Floats with decimal part non equal to zero are considered UNeven for this kata.
*/