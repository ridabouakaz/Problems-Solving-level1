#include<iostream>
#include <string>
#include<array>
#include<vector>

using namespace std;
//crated function You classify a word through a loop that separates letters from each other
int RemoveExclamationMarks(string word) {
	string result;
	char b = '!';
	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] == b)
		{
			continue;
		}
		result += word[i];

	}

	cout << result;
	return 0;
}
int main() {

	RemoveExclamationMarks("woooooooooodwo!r!!d!!ld!!");

	return 0;
}
//Write function RemoveExclamationMarks which removes all exclamation marks from a given string