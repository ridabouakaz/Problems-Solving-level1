#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;

//  function add element in vectore via loop
vector<int>countBy(int number1, int number2) {
    vector<int> result;
    for (int i = 1; i <= number2; i++) {
        result.push_back(i * number1);
    }
    return result;
}
int main() {
    countBy(2, 5);
    return 0;
}
/*Create a function with two arguments that will return an array of the first n multiples of x.

Assume both the given number and the number of times to count will be positive numbers greater than 0.

Return the results as an array or list ( depending on language )*/