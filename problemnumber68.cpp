#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//  function calcul volume of a cuboid 	
double getVolumeOfCuboid(double length, double width, double height) {
	return length * width * height;
}
int main() {
	cout << getVolumeOfCuboid(1, 2, 2);
	return 0;
}
/*Bob needs a fast way to calculate the volume of a cuboid with three values: the length, width and height of the cuboid. Write a function to help Bob with this calculation.*/