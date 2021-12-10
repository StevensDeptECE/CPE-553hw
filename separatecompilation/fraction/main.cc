#include "fraction.hh"

int main() {
	try {
		const fraction a(1,2);
		const fraction b(1,3);
		fraction c = a + b;
		cout << c << '\n';
		fraction d(1,0); // die
	} catch(const char* msg) {
		cout << msg << '\n';
	}
}
