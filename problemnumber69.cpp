#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//  function calcul Average value in vector 	
double get_average(vector <int> marks) {
	int result = 0;
	for (int i = 0; i < marks.size(); i++)
	{
		result += marks[i];
	}
	double resultfinal = result / marks.size();
	cout << resultfinal;
	return 0;
}
int main() {
	get_average({ 2,5,13,20,16,16,10 });
	return 0;
}
/*It's the academic year's end, fateful moment of your school report. The averages must be calculated. All the students come to you and entreat you to calculate their average for them. Easy ! You just need to write a script.

Return the average of the given array rounded down to its nearest integer.

The array will never be empty*/