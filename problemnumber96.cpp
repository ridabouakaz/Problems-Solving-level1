#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
// the function calculate how many blank pages do you need.
int paperwork(int n, int m) {
    return n < 0 || m < 0 ? 0 : n * m;
}

int main() {
    paperwork(95, 90);
    return 0;
}
/*Your classmates asked you to copy some paperwork for them. You know that there are 'n' classmates and the paperwork has 'm' pages.

Your task is to calculate how many blank pages do you need. If n < 0 or m < 0 return 0.
Example:

n= 5, m=5: 25
n=-5, m=5:  0

Waiting for translations and Feedback! Thanks!
*/