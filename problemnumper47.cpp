#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;


//  function sum goal to messi	
int  messigoal(int laLigaGoals, int copaDelReyGoals, int championsLeagueGoals) {
	return laLigaGoals + copaDelReyGoals + championsLeagueGoals;
}
int main() {
	cout << messigoal(5, 10, 2);
	return 0;
}
/*Messi goals function

Messi is a soccer player with goals in three leagues:

	LaLiga
	Copa del Rey
	Champions

Complete the function to return his total number of goals in all three leagues.

Note: the input will always be valid.*/