#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
// function  for remove space betwin character 
int repeated(string numbers)
{
	string word;
	for (int i = 0; i < numbers.size(); i++)
	{
		if (numbers[i] == ' ')
		{
			continue;
		}

		word += numbers[i];
	}
	cout << word;
	return 0;
}
int main() {
	repeated("8 j 8   mBliB8g  imjB8B8  jl  B");
	return 0;
}
/*Write a function that removes the spaces from the string, then return the resultant string.*/