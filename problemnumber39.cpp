#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
// function return an array of all integers between the input parameters
int  integersbetweeninput(int num1, int num2) {

	for (int i = num1; i <= num2; i++)
	{

		cout << i;
	}
	return 0;
}
int main() {
	integersbetweeninput(1, 4);
	return 0;
}
/*Complete the function that takes two integers (a, b, where a < b) and return an array of all integers between the input parameters, including them.*/