#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int base, exponent;
	cout << "What is the base?" << endl;
	cin >> base;
	cout << "What is the exponent?" << endl;
	cin >> exponent;
	double power = pow(base, exponent);
	cout << "Result: " << power << endl;
	return 0;
}