#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<string>
using namespace std;
array<string, 3> names;
// function You arrange the numbers in an array from smallest to largest, and we reverse that if necessary.
vector<int> flip(char dir, vector<int> arr)
{
	vector<int>result = arr;
	if (dir == 'R')
	{
		sort(result.begin(), result.end());
	}
	else
	{
		sort(result.begin(), result.end());
		reverse(result.begin(), result.end());
	}
	return result;
}
int main() {
	flip('R', { 3, 2, 1, 2 });
	return 0;
}
/*If you've completed this kata already and want a bigger challenge, here's the 3D version

Bob is bored during his physics lessons so he's built himself a toy box to help pass the time. The box is special because it has the ability to change gravity.

There are some columns of toy cubes in the box arranged in a line. The i-th column contains a_i cubes. At first, the gravity in the box is pulling the cubes downwards. When Bob switches the gravity, it begins to pull all the cubes to a certain side of the box, d, which can be either 'L' or 'R' (left or right). Below is an example of what a box of cubes might look like before and after switching gravity.*/