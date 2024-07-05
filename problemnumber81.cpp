#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

//  function  reverses all of the words within the string passed in.
string reverse_words(const string str) {
	string words = "";
	string temp = "";
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
		{
			words = temp + " " + words;
			temp = "";
		}
		else
		{
			temp += str[i];
		}
	}
	words = temp + " " + words;
	words.pop_back();
	return words;
}
int main() {
	cout << reverse_words("hello world!");
	return 0;
}
/*Complete the solution so that it reverses all of the words within the string passed in.

Words are separated by exactly one space and there are no leading or trailing spaces.

Example(Input --> Output):*/