#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
// function contains loop contains him condition about character and words 
int  countreturns(string words, char character) {
	int result = 0;
	for (int i = 0; i < words.size(); i++)
	{
		if (words[i] == character)
		{
			result++;
		}
	}
	cout << result;
	return 0;
}
int main() {
	countreturns("hello", 'l');
	return 0;
}
/*Create a function that accepts a string and a single character, and returns an integer of the count of occurrences the 2nd argument is found in
the first one*/