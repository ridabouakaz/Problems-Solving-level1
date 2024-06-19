#include<iostream>
using namespace std;
//crated function calcul modulo number for know if number  even number
int Simplemultiplication(int num1) {
	if (num1>1||num1<101 )
	{
		cout << 1;
	}
	else if (num1 > 101 || num1 < 200)
	{
		cout << 2;
	}
	else if (num1 > 200 || num1 < 300)
	{
		cout << 3;
	}
	else if (num1 > 300 || num1 < 400)
	{
		cout << 4;
	}
	else if (num1 > 400 || num1 < 500)
	{
		cout << 5;
	}
	else if (num1 > 500 || num1 < 600)
	{
		cout << 6;
	}
	else if (num1 > 600 || num1 < 700)
	{
		cout << 7;
	}
	else if (num1 > 700 || num1 < 800)
	{
		cout << 8;
	}
	
	return 0;
}
int main() {
	int num1 = 20;
	cout << Simplemultiplication(num1);

	return 0;
}
//This kata is about multiplying a given number by eight if it is an even number and by nine otherwise.