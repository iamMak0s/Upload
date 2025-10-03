#include <iostream>

using namespace std;

int main() {
	
	char op;
	float x,y;
	
	cout << "Desired Operation (+ | - | * | /) \n";
	cin >> op;
	cout << "First Value: ";
	cin >> x;
	cout << "Second Value: ";
	cin >> y;
	
	switch (op) {
		case '+':
			cout << "Your value is: " << x + y;
			break;
		case '-':
			cout << "Your value is: " << x - y;
			break;
		case '*':
			cout << "Your value is " << x * y;
			break;
		case '/':
			cout << "Your value is: " << x / y;
			break;
		default:
			cout << "\nInvalid Operator";
	}
	
	return 0;
}
