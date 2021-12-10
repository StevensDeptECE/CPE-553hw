#include "fraction.hh"

int main() {
	try {
		fraction a(1,2);
		fraction b(1,3);
		fraction c = a + b;
		cout << c << '\n';
		fraction d(1,0); // die
	} catch(const char* msg) {
		cout << msg << '\n';
	}
}
