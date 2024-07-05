#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

//  function that checks if a given string (case insensitive)
bool isPalindrom(string str) {
	for (int i = 0; i < str.length() - 1; i++)
	{
		if (towlower(str[i]) != towlower(str[str.length() - 1 - i]))
		{
			return false;
		}
	}
	return true;
}
int main() {
	cout << isPalindrom("Abba");
	return 0;
}
/*Write a function that checks if a given string (case insensitive) is a palindrome.

A palindrome is a word, number, phrase, or other sequence of symbols that reads the same backwards as forwards, such as madam or racecar.

*/