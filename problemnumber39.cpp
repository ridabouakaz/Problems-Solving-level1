#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
// function return an array of all integers between the input parameters
int main(int num1, int num2) {
	vector<int> list;
	for (int i = num1; i <= num2; i++)
	{

		list.push_back(i);
		
	}
	return list;
}
/*Complete the function that takes two integers (a, b, where a < b) and return an array of all integers between the input parameters, including them.*/