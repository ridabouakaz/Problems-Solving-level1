﻿#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<string>
using namespace std;
// function  the largest number obtained after inserting the following operators and brackets: +, *, ()
int expressionsMatter(int a, int b, int c)
{
    if (a == b == c)
    {
        return a + b + c;
    }
    else
    {
        int result = max({ a * (b + c), a * b * c, a + b * c, (a + b) * c });
        return result;
    }
}
int main() {
    cout << expressionsMatter((1), (1), (1));
    return 0;
}
/*Task

    Given three integers a ,b ,c, return the largest number obtained after inserting the following operators and brackets: +, *, ()
    In other words , try every combination of a,b,c with [*+()] , and return the Maximum Obtained (Read the notes for more detail about it)

Example

With the numbers are 1, 2 and 3 , here are some ways of placing signs and brackets:

    1 * (2 + 3) = 5
    1 * 2 * 3 = 6
    1 + 2 * 3 = 7
    (1 + 2) * 3 = 9

So the maximum value that you can obtain is 9.
Notes

    The numbers are always positive.
    The numbers are in the range (1  ≤  a, b, c  ≤  10).
    You can use the same operation more than once.
    It's not necessary to place all the signs and brackets.
    Repetition in numbers may occur .
    You cannot swap the operands. For instance, in the given example you cannot get expression (1 + 3) * 2 = 8.
*/