#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

//  function calculate the average and compare your score and !Return true if you're better, else false!
bool  betterThanAverage(vector <int> classPoints, int yourPoints) {
	int result = 0;
	for (int i = 0; i < classPoints.size(); i++)
	{
		result += classPoints[i];
	}
	double resultfinal = result / classPoints.size();
	if (resultfinal < yourPoints)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main() {
	cout << betterThanAverage({ 29, 55, 74, 60, 11, 90, 67, 28 }, 21);
	return 0;
}
/*There was a test in your class and you passed it. Congratulations!

But you're an ambitious person. You want to know if you're better than the average student in your class.

You receive an array with your peers' test scores. Now calculate the average and compare your score!

Return true if you're better, else false!
Note:

Your points are not included in the array of your class's points. Do not forget them when calculating the average score!
*/