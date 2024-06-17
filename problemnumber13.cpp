#include<iostream>
#include <string>
#include<array>
#include<vector>
// function for roundes and calcul value to water for drinks
using namespace std;
int drinkslitres(int time)
{
	int litres = 0.5 * time;
	floor(litres);
	return litres;
}
int main() {
	cout << drinkslitres(11.8);

	return 0;
}
/*Because Nathan knows it is important to stay hydrated, he drinks 0.5 litres of water per hour of cycling.

You get given the time in hours and you need to return the number of litres Nathan will drink, rounded to the smallest value.*/