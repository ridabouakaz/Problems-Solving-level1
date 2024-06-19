#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
// function contains loop condition is i =1 and i=i+2 for number odd
int    returnthenumber(int num1) {
	for (int i = 1; i < num1; i = i + 2)
	{
		cout << i << "\n";
	}
	return 0;
}
int main() {
	returnthenumber(15);
	return 0;
}
/*Given a number n, return the number of positive odd numbers below n, EASY*/