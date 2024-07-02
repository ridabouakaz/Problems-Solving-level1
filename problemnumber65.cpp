#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//  function clacul health after damage
int combat(int health, int damage) {

	return health - damage > 0 ? health - damage : 0;
}
int main() {
	cout << combat(20, 30);
	return 0;
}
/*Create a combat function that takes the player's current health and the amount of damage recieved, and returns the player's new health. Health can't be less than 0.
*/