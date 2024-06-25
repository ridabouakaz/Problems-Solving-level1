#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;


//  function   get the sum of two arrays 
int  planet_id_conversion(vector<int>array1, vector<int>array2) {
	int result = 0;
	for (int i = 0; i < array1.size(); i++)
	{
		result += array1[i] + array2[i];
	}
	cout << result;
	return 0;

}
int main() {
	planet_id_conversion({ -1 }, { -1 });
	return 0;
}
/*I'm new to coding and now I want to get the sum of two arrays... Actually the sum of all their elements. I'll appreciate for your help.

P.S. Each array includes only integer numbers. Output is a number too.
*/