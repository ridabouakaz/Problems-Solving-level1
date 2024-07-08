#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<string>
using namespace std;
// function takes this collection and returns the number of points our team (x) got in the championship by the rules given above.
int points(array<string, 10>& games) {
    int result = 0;
    for (auto points : games)
    {
        if (points[0] > points[2])
        {
            result += 3;
        }

        if (points[0] == points[2])
        {
            result += 1;
        }

    }
    return result;
}
int main() {
    array<string, 10> gameResults = { "1:0", "2:0", "3:0", "4:0", "2:1", "3:1", "4:1", "3:2", "4:2", "4:3" };
    cout << points(gameResults);
    return 0;
}
/*Our football team has finished the championship.

Our team's match results are recorded in a collection of strings. Each match is represented by a string in the format "x:y", where x is our team's score and y is our opponents score.

For example: ["3:1", "2:2", "0:1", ...]

Points are awarded for each match as follows:

    if x > y: 3 points (win)
    if x < y: 0 points (loss)
    if x = y: 1 point (tie)

We need to write a function that takes this collection and returns the number of points our team (x) got in the championship by the rules given above.

Notes:

    our team always plays 10 matches in the championship
    0 <= x <= 4
    0 <= y <= 4

*/