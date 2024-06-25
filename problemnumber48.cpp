#include<iostream>
#include <string>
#include<array>
#include<vector>
using namespace std;


//  function  give you 	sequence to Solar chain 
int  planet_id_conversion(int id_conversion) {
	string	planet[] = { "Mercury","Venus","Earth","Mars","Jupiter","Saturn","Uranus","Neptune" };
	for (int i = id_conversion - 1; i <= id_conversion - 1; i++)
	{
		cout << planet[i];
	}
	return 0;

}
int main() {
	planet_id_conversion(3);
	return 0;
}
/*The function is not returning the correct values. Can you figure out why?

Example (Input --> Output ):

3 --> "Earth"

*/