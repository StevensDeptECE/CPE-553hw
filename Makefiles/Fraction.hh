#pragma once
#include <iostream>

class Fraction {
private:
	//TODO: add private variables

public:
	Fraction(uint32_t n, uint32_t d);
	friend operator +(const Fraction& a, const Fraction& b);
	//TODO: add unary negation here
	
	friend std::ostream& operator <<(std::ostream& s, const Fraction& f);
};
