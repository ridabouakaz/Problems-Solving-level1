#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
//  function clacul new position to player	
int  TerminalGameMove(int position, int roll) {
	if (roll >= 0 && roll <= 6)
	{
		int result = position + (roll * 2);
		cout << result;
	}
	else
	{
		cout << "please change number roll";
	}
	return 0;
}
int main() {
	TerminalGameMove(2, 9);
	return 0;
}
/*In this game, the hero moves from left to right. The player rolls the dice and moves the number of spaces indicated by the dice two times.

Create a function for the terminal game that takes the current position of the hero and the roll (1-6) and return the new position.*/