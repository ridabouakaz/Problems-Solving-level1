#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

//  function It counts how many years ago the father was twice as old as his son (or in how many years he will be twice as old)
int twice_as_old(int dad, int son) {
	return son * 2 - dad > 0 ? son * 2 - dad : (son * 2 - dad) * -1;
}
int main() {
	cout << twice_as_old(36, 7);
	return 0;
}
/*Your function takes two arguments:

	current father's age (years)
	current age of his son (years)

Сalculate how many years ago the father was twice as old as his son (or in how many years he will be twice as old). The answer is always greater or equal to 0, no matter if it was in the past or it is in the future.
*/