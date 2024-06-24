#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;

/*وقد جاء الحديث الذي رواه أحمد ومسلم واللفظ له عن بعض أزواج النبي صلى الله عليه وسلم أنه قال: من أتى عرافاً فسأله عن شيء لم تقبل له صلاة أربعين يوماً.*/

//  function contanis condition if number odd or even	
int  love(int numflower1, int numflower2) {
	if (numflower1 % 2 == 0 && numflower2 % 2 == 1 || numflower2 % 2 == 0 && numflower1 % 2 == 1)
	{
		cout << "marry";
	}
	else
	{
		cout << "cant marry";
	}
	return 0;
}
int main() {
	love(10, 10);
	return 0;
}
/*Timmy & Sarah think they are in love, but around where they live, they will only know once they pick a flower each. If one of the flowers has an even number of petals and the other has an odd number of petals it means they are in love.

Write a function that will take the number of petals of each flower and return true if they are in love and false if they aren't.
*/