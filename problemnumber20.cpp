#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
// function calcul time a milliseconds 
int  calculmilliseconds(int h, int m, int s) {
	int result = (h * 60 * 60 * 1000) + (m * 60 * 1000) + (s * 1000);
	return result;
}
int main() {
	cout << calculmilliseconds(0, 1, 1);
	return 0;
}
/*Your task is to write a function which returns the time since midnight in milliseconds.*/