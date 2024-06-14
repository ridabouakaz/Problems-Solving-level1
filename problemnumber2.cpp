#include<iostream>
using namespace std;
//crated function contains year add 99 for insert loop century and / for position year 
int centuryFromYear(int year) {

	return (year + 99) / 100;
}
int main() {
	int year = 800;
	cout << centuryFromYear(year);

	return 0;
}
//The first century spans from the year 1 up to and including the year 100, the second century - from the year 101 up to and including the year 200, etc.