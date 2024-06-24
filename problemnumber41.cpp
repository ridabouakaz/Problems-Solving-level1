#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
//  function to convert uppercase Approval on ASCII value
int  uppercase(string name) {
	string namefull;
	for (int i = 0; i < name.size(); i++)
	{
		namefull += char(name[i] - 32);
	}

	cout << namefull;
	return 0;
}
int main() {
	uppercase("heelo");
	return 0;
}
/*Write a function which converts the input string to uppercase.
Fundamentals
Strings*/