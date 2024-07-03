#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

//  function convert number to fake binary(01) 	
int fakeBin(string array) {
	string result = "";
	for (int i = 0; i < array.size(); i++)
	{
		if (array[i] < '5')
		{
			result += "0";
		}
		else
		{
			result += "1";
		}
	}
	cout << result;
	return 0;
}
int main() {
	fakeBin("509321967506747");
	return 0;
}
/*Given a string of digits, you should replace any digit below 5 with '0' and any digit 5 and above with '1'. Return the resulting string.*/