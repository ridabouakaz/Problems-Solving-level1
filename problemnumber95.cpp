#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
// the function  finds the average of the three scores passed to it and returns the letter value associated with that grade.

char getGrade(int a, int b, int c) {
    int result = (a + b + c) / 3;
    if (result >= 90 & result <= 100)
    {
        return 'A';
    }
    else if (result >= 80 & result < 90)
    {
        return 'B';
    }
    else if (result >= 70 & result < 80)
    {
        return 'C';
    }
    else if (result >= 60 & result < 70)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }


    return result;
}
int main() {
    cout << getGrade(95, 90, 93);
    return 0;
}
/*Grade book

Complete the function so that it finds the average of the three scores passed to it and returns the letter value associated with that grade.
Numerical Score 	Letter Grade
90 <= score <= 100 	'A'
80 <= score < 90 	'B'
70 <= score < 80 	'C'
60 <= score < 70 	'D'
0 <= score < 60 	'F'

Tested values are all between 0 and 100. Theres is no need to check for negative values or values greater than 100*/