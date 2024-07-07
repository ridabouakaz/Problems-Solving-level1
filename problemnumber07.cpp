#include<iostream>
#include <string>
#include<array>
using namespace std;
//crated function calcul price manga with show number mango free
int mango(int manga, int price) {
	int manga_free = manga / 3;
	int manga_new = manga - manga_free;
	if (manga >= 3)
	{
		cout << manga_new << " mangoes for " << price << " per unit" << "= " << manga_new * price << " ; " << manga_free << " mango for free ";
	}
	else
	{
		cout << manga << " mangoes for " << price << " per unit" << "= " << manga * price << "   ; " << " no mango for free ";
	}

	return 0;
}
int main() {
	mango(9, 5);

	return 0;
}
//There's a "3 for 2" (or "2+1" if you like) offer on mangoes. For a given quantity and price (per mango), calculate the total cost of the mangoes.
