#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

//  function  split a string and convert it into an array of words
vector<string> string_to_array(string s) {
	vector<string>result;
	string temp = "";
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != ' ')
		{
			temp += s[i];
		}
		else
		{
			result.push_back(temp);
			temp.clear();
		}
	}
	result.push_back(temp);
	return  result;
}
int main() {
	string_to_array("some value");
	return 0;
}
/*Write a function to split a string and convert it into an array of words.
Examples (Input ==> Output):

"Robin Singh" ==> ["Robin", "Singh"]

"I love arrays they are my favorite" ==> ["I", "love", "arrays", "they", "are", "my", "favorite"]

*/