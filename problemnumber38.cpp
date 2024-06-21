#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
// function  Return the Nth Even Number
int       NthEvenNumber(int numbers) {
	int result = 0;
	for (int i = 0; i <= numbers; i = i + 2)
	{
		i;
		result++;
	}
	cout << result;
	return 0;
}
int main() {
	NthEvenNumber(2597466);
	return 0;
}
/*Return the Nth Even Number*/