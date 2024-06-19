#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
// function check if any character lowercase and give false in finding
int  ALLCAPS(string word) {
	for (int i = 0; i < word.size(); i++)
	{
		if (islower(word[i]))
		{
			return false;
		}
	}
	return true;
}
int main() {
	cout << ALLCAPS("RIDAa");
	return 0;
}
/*Create a method to see whether the string is ALL CAPS.*/