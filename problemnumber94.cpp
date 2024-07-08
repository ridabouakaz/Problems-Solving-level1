#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
using namespace std;
// The function takes a number n, takes the same number from the array, and sets a power with a value of n

int NthPower(vector<int> vectorr, int n) {
    int result = 0;
    if (vectorr.back() < n)
    {
        return -1;
    }
    else
    {
        for (int i = 0; i < vectorr.size(); i++)
        {

            if (i == n)
            {
                result = pow(vectorr[i], n);
            }
        }

    }


    return result;
}
int main() {
    cout << NthPower({ 1, 2 }, 3);
    return 0;
}
