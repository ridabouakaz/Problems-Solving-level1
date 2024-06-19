#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
// function calcul it squares each number passed into it and then sums the results together 
int    squareseachnumber(int num1, int num2, int num3) {
	int result = (num1 * num1) + (num2 * num2) + (num3 * num3);
	return result;
}
int main() {
	cout << squareseachnumber(1, 2, 2);
	return 0;
}
/*Complete the square sum function so that it squares each number passed into it and then sums the results together.*/