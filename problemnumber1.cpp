#include<iostream>
using namespace std;
//crated function calcul modulo number for know if number  even number
int Simplemultiplication(int num1) {
	if (num1%2==0)
	{
		cout << num1 * 8;
	}
	else
	{
		cout << num1 * 9;
	}
	return 0;
}
int main() {
	int num1 = 20;
	cout<<Simplemultiplication(num1);

	return 0;
}
//This kata is about multiplying a given number by eight if it is an even number and by nine otherwise.