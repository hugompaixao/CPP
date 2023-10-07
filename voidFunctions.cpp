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

void print_pow(double base, int exponent) {
	double result = power(base, exponent);
	cout << base << " raised to the " << exponent << " power is " << result << endl;
}

int main () {
	double base;
	int exponent;
	cout << "What is the base?" << endl;
	cin >> base;
	cout << "What is the exponent?" << endl;
	cin >> exponent;
	print_pow(base, exponent);
	return 0;
}