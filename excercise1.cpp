#include <iostream>
#include <cmath>
using namespace std;

int main () {
	float m;
	const float c = 2.997925 * pow(10, 8);
	cout << "Input Mass: ";
	cin >> m;
	cout << "E = " << m * pow(c, 2);
	
}
