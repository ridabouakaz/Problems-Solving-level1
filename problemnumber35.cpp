#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
// function smulation rules to game scissorspaperrock
int       scissorspaperrock(string chose1, string chose2) {


	string scissors = "scissors";
	string paper = "paper";
	string rock = "rock";
	if (chose1 == paper && chose2 == rock)
	{
		cout << "player one is win";
	}
	else if (chose2 == paper && chose1 == rock)
	{
		cout << "player two is win";
	}
	else if (chose1 == scissors && chose2 == paper)
	{
		cout << "player one is win";
	}
	else if (chose2 == scissors && chose1 == paper)
	{
		cout << "player two is win";
	}
	else if (chose1 == rock && chose2 == scissors)
	{
		cout << "player one is win";
	}
	else if (chose2 == rock && chose1 == scissors)
	{
		cout << "player two is win";
	}
	else
	{
		cout << "drrrraaaaw";
	}
	return 0;
}
int main() {
	scissorspaperrock("paper", "paper");
	return 0;
}
/*Let's play! You have to return which player won! In case of a draw return Draw!.*/
