#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	float H,h,w,A,x,B,C,D;
	
	cout << "Enter Height (in ft): "; 
	cin >> H;
	cout << "Enter Height (in inches): ";
	cin >> h;
	cout << "Enter Weight (in lbs): ";
	cin >> w;
	
	A = H * 12;
	x = A + h;
	B = x * 0.0254;
	C = w / 2.2;
	D = pow(B,2);
	
	cout << "Height (meters): " << B;
	cout << "\nWeight (Kgs): " << C;
	cout << "\nYour BMI: " << C / D;
	
}
