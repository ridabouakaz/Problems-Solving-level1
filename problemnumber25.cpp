#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;
// function contains loop and condition about sheep 
int   countsthenumber(vector<bool>nume) {
	int result = 0;
	for (int i = 0; i < nume.size(); i++)
	{
		if (nume[i] == true)
		{
			result++;
		}

	}
	return result;
}
int main() {
	vector<bool>nummes = { true,  true,  true,  false,
  true,  true,  true,  true ,
  true,  false, true,  false,
  true,  false, false, true ,
  true,  true,  true,  true ,
  false, false, true,  true };
	cout << countsthenumber(nummes);
	return 0;
}
/*Consider an array/list of sheep where some sheep may be missing from their place.
We need a function that counts the number of sheep present in the array (true means present)*/