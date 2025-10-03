#include <iostream>

using namespace std;

int main () {
	
	float x,y;
	
	cout << "Distance Traveled (in Km): ";
	cin >> x;
	cout << "Gas Consumed (in L): ";
	cin >> y;
	cout << "Current Fuel Consumption: " << x / y << "L/km";
}
