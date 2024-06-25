#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;


//  function  just appreciate the full number
int  MonkeyCount(int count) {
	cout << "[";
	for (int i = 1; i <= count; i++)
	{
		if (i == count)
		{
			cout << i;

		}
		else
		{
			cout << i << ",";
		}

	}
	cout << "]";
	return 0;

}
int main() {
	MonkeyCount(10);
	return 0;
}
/*You take your son to the forest to see the monkeys. You know that there are a certain number there (n), but your son is too young to just appreciate the full number, he has to start counting them from 1.

As a good parent, you will sit and count with him. Given the number (n), populate an array with all numbers up to and including that number, but excluding zero.*/