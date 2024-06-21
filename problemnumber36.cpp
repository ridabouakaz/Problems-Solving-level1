#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
// function returns a greeting for a user
int       greet(string name) {
	if (name == "Johnny") {
		cout << "Hello, my love!";
	}
	else
	{
		cout << "Hello, " + name + "!";

	}
	return 0;
}
int main() {
	greet("Johhnny");
	return 0;
}
/*Jenny has written a function that returns a greeting for a user.However, she's in love with Johnny,
and would like to greet him slightly different. She added a special case to her function,
but she made a mistake.*/