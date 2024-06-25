#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;


//  function   calcul number to sheep
int  planet_id_conversion(int sheep) {
	if (sheep >= 1)
	{
		for (int i = 1; i <= sheep; i++)
		{
			cout << i << " sheep...";
		}
	}
	else
	{
		cout << " ' ' ";
	}
	return 0;

}
int main() {
	planet_id_conversion(5);
	return 0;
}
/*If you can't sleep, just count sheep!!
Task:

Given a non-negative integer, 3 for example, return a string with a murmur: "1 sheep...2 sheep...3 sheep...". Input will always be valid, i.e. no negative integers.
*/