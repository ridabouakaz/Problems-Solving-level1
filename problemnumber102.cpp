#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
//A function that returns a greeting with a name
string greet(string n) {
	string result = "Hello, " + n + " how are you doing today?";
	return result;
}


int main() {
	cout << greet("Ryan");
	return 0;
}

/*Make a function that will return a greeting statement that uses an input; your program should return, "Hello, <name> how are you doing today?".

[Make sure you type the exact thing I wrote or the program may not execute properly]
*/