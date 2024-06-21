#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
// function conver 1 to i and 0to o and 5 to s
int       correcttheerrorstext(string words) {
	string word;
	for (int i = 0; i < words.size(); i++)
	{

		if (words[i] == '1')
		{
			words[i] = 'I';
		}
		else if (words[i] == '5')
		{
			words[i] = 'S';
		}
		else if (words[i] == '0')
		{
			words[i] = 'O';
		}
		else
		{
			words[i];
		}

	}
	cout << words;
	return 0;
}
int main() {
	correcttheerrorstext("R0BERT MERLE - THE DAY 0F THE D0LPH1N");
	return 0;
}
/*Character recognition software is widely used to digitise printed texts. Thus the texts can be edited, searched and stored on a computer.

When documents (especially pretty old ones written with a typewriter), are digitised character recognition softwares often make mistakes.

Your task is correct the errors in the digitised text. You only have to handle the following mistakes:*/
