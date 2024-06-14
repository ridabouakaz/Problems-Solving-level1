#include<iostream>
using namespace std;
//crated function contains modulo n with x ad y for know if  divisible x and y 
int divisible(int n, int y, int x) {

	if (n % x == 0 && n % y == 0)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}
	return 0;
}
int main() {
	int n = 12;
	int x = 7;
	int y = 5;
	divisible(n, y, x);

	return 0;
}
//Create a function that checks if a number n is divisible by two numbers x AND y. All inputs are positive, non-zero numbers.