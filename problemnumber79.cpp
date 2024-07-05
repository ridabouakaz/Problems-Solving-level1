#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

//  function return the digits of this number within an array in reverse order.
vector<int> digitize(unsigned long n) {
	vector<int>result;
	string st = to_string(n);
	reverse(st.begin(), st.end());
	for (int i = 0; i < st.size(); i++)
	{
		result.push_back(st[i] - '0');
	}
	return { result };



}
int main() {
	digitize(348597);
	return 0;
}
/*Given a random non-negative number, you have to return the digits of this number within an array in reverse order.
Example(Input => Output):

35231 => [1,3,2,5,3]
0 => [0]
*/