#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
// function calcul if number to bullets Enough to kill dragon or no
int      hero(int bullets, int dragon) {
    if (bullets / 2 >= dragon)
    {
        cout << "the couple dragon is dead";
    }
    else
    {
        cout << "the couple dragon stay alive";
    }
    return 0;
}
int main() {
    hero(7, 4);
    return 0;
}
/*A hero is on his way to the castle to complete his mission. However, he's been told that the castle is surrounded with a couple of powerful dragons! each dragon takes 2 bullets to be defeated, our hero has no idea how many bullets he should carry.. Assuming he's gonna grab a specific given number of bullets and move forward to fight another specific given number of dragons, will he survive?

Return true if yes, false otherwise :)
*/
