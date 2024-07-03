#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

//  function Replace all vowel to exclamation to "!"
string replace(string s) {
	string	result = "";
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
		{
			result += "!";
		}
		else
		{
			result += s[i];
		}
	}
	cout << result;
	return 0;
}
int main() {
	replace("ABCDE");
	return 0;
}
/* Replace all vowel to exclamation mark in the sentence. aeiouAEIOU is vowel.*/