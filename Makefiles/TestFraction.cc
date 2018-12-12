#include <iostream>
#include "Fraction.hh"

int main() {
	Fraction a(1,2);
	Fraction b(1,3);
	Fraction c = a + b;
	Fraction d = -a;
	cout << a << " + " << b << " = " << c << '\n';

	cout << d << '\n';
}
