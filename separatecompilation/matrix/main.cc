#include "matrix.hh"

int main() {
	const matrix a(3,4, 2.5); // create a matrix with 3 rows, 4 columns each.
	// fill each element with 2.5

	matrix b = a; // copy matrix a
	b(1,2) = 1.1; // set the element at row 1, column 2 = 1.1

	cout << b << '\n';
	matrix c = a + b;
	cout << c << '\n';
}
