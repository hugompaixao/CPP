#include <iostream>

using std::cin;
using std::cout;
using std::endl;

double power (double base, int exponent) {
	double result = 1;
	for (int i = 0; i < exponent; i++) {
		result = result * base;
	}
	return result;
}

int main () {
	int base, exponent;
	cout << "What is the base?" << endl;
	cin >> base;
	cout << "What is the exponent?" << endl;
	cin >> exponent;
	double result = power(base, exponent);
	cout << "Result: " << result << endl;
	return 0;
}