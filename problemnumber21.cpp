#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
// function covert lowercase to uppercase each and uppercase letter becomes lowercase 
int  toAlternatingCase(string words) {
	string word;
	for (int i = 0; i < words.size(); i++)
	{
		if (char(words[i]) <= 90)
		{
			word = +char(words[i]) + 32;
		}
		else if (char(words[i]) > 90)
		{
			word = +char(words[i]) - 32;
		}
		cout << word;
	}
	return 0;
}
int main() {
	toAlternatingCase("aheEme");
	return 0;
}
/*Define String.prototype.toAlternatingCase
(or a similar function/method such as to_alternating_case/toAlternatingCase/ToAlternatingCase in your selected language;
see the initial solution for details) such that each lowercase letter becomes uppercase and each uppercase letter becomes lowercase.*/