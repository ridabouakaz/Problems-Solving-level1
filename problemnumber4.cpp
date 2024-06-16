#include<iostream>
using namespace std;
//crated function check if number odd or even 
int divisible(int n) {

	if (n % 2 == 0)
	{
		cout << "Even " << "Incorrect answer for number= " << n;
	}
	else if (n % 2 == 1)
	{
		cout << "Odd " << "Incorrect answer for number= " << n;
	}

	return 0;
}
int main() {
	int n = 13;
	divisible(n);

	return 0;
}
//Create a function that checks if a number n is odd or event