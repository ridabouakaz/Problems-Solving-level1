#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<string>
using namespace std;
array<string, 3> names;
// function arrange the array so that the animal is the right way round (head, body, tail). 
array<string, 3> fixTheMeerkat(array<string, 3> arr)
{
	reverse(arr.begin(), arr.end());
	return arr;
}
int main() {
	fixTheMeerkat();
	return 0;
}
/*You're at the zoo... all the meerkats look weird. Something has gone terribly wrong - someone has gone and switched their heads and tails around!

Save the animals by switching them back. You will be given an array which will have three values (tail, body, head). It is your job to re-arrange the array so that the animal is the right way round (head, body, tail).

Same goes for all the other arrays/lists that you will get in the tests: you have to change the element positions with the same exact logics

Simples!
*/