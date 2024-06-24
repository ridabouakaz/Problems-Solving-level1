#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
//  function to approval switch and give case value contina string number	
int  uppercase(int numbers) {
	string find;
	switch (numbers)
	{
	case 0:cout << "Zero";
		break;
	case 1:cout << "One";
		break;
	case 2:cout << "Two";
		break;
	case 3:cout << "Three";
		break;
	case 4:cout << "Four";
		break;
	case 5:cout << "Five";
		break;
	case 6:cout << "Six";
		break;
	case 7:cout << "Seven";
		break;
	case 8:cout << "Eight";
		break;
	case 9:cout << "Nine";
	default:
		break;
	}

	return 0;
}
int main() {
	uppercase(10);
	return 0;
}
/*When provided with a number between 0-9, return it in words.

Input :: 1

Output :: "One".

If your language supports it, try using a switch statement.
*/