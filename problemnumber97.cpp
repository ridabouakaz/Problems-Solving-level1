#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
/*قال الله تعالى :
( فَانكِحُوهُنَّ بِإِذْنِ أهْلِهِنَّ وَآتُوهُنَّ أُجُورَهُنَّ بِالْمَعْرُوفِ مُحْصَنَاتٍ غَيْرَ مُسَافِحَاتٍ وَلا مُتَّخِذَاتِ أَخْدَانٍ ) النساء 25*/
// the function gives out the total amount for different days(d).
int rental_car_cost(int d) {
    return d >= 7 ? (40 * d) - 50 : d >= 3 ? (40 * d) - 20 : d * 40;
}

int main() {
    cout << rental_car_cost(4);
    return 0;
}
/*After a hard quarter in the office you decide to get some rest on a vacation. So you will book a flight for you and your girlfriend and try to leave all the mess behind you.

You will need a rental car in order for you to get around in your vacation. The manager of the car rental makes you some good offers.

Every day you rent the car costs $40. If you rent the car for 7 or more days, you get $50 off your total. Alternatively, if you rent the car for 3 or more days, you get $20 off your total.

Write a code that gives out the total amount for different days(d).
*/