#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
int  calculgallons(int gallon, int mill) {
	int result = gallon * 25;

	if (result == mill)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}

	return 0;
}
int main() {
	calculgallons(2, 50);
	return 0;
}
