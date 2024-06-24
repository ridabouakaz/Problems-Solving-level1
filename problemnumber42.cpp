#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
//  function to check x for string approval loop 
int  uppercase(string name, char x) {
	string find;
	for (int i = 0; i < name.size(); i++)
	{
		if (name[i] == x)
		{
			return true;
		}

	}
	return false;
}
int main() {
	cout << uppercase("heelo", 'l');
	return 0;
}
/*You will be given an array a and a value x. All you need to do is check whether the provided array contains the value.

Array can contain numbers or strings. X can be either.

Return true if the array contains the value, false if not.
*/