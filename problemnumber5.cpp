#include<iostream>
#include<array>
using namespace std;
//crated A function contens loop it You do the opposite word

int divisible(string word = "world") {

	for (int i = word.length() - 1; i >= 0; i--)
	{
		cout << word[i] << "\n";
	}

	return 0;
}
int main() {
	divisible("rida");

	return 0;
}
//crated A function that reverses the word