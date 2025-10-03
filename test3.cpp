#include <iostream>
using namespace std;

int main() {
	
	float x;
	const float Y = 0.62137;
	
	cout << "Enter Distance (in Km): ";
	cin >> x;
	cout << "Your distance in miles is: " << x * Y;
}
