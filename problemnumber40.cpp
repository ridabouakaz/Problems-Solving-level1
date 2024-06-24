#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
//  function to convert a name into initials when she is take first letters on words
int  nameintoinitials(string name) {
	string namefull;
	namefull += toupper(name[0]);
	namefull += ".";
	for (int i = 0; i < name.size(); i++)
	{
		if (name[i] == ' ')
		{
			namefull += toupper(name[i + 1]);
		}
	}

	cout << namefull << "\n";
	return 0;
}
int main() {
	nameintoinitials("patrick feeney");
	return 0;
}
/*Write a function to convert a name into initials. This kata strictly takes two words with one space in between them.

The output should be two capital letters with a dot separating them.

It should look like this:

Sam Harris => S.H

patrick feeney => P.F
*/