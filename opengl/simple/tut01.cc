#include <iostream>
#include "GLWin.hh"
/*
	OpenGL Tutorial 01
	Dov Kruger
	Dec. 12, 2018
	
	Blank Window, OpenGL set up but draws nothing

 */


using namespace std;

class Tut01 : public GLWin {
private:
public:
	Tut01() : GLWin(1000,500, "Tut01", nullptr, nullptr, Color(0,0,.7)) {}
	void setup() override {}
	void draw() const override {}
};

int main() {
	try {
		Tut01 t;
		t.waitLoop();
	} catch (const char msg[]) {
		cerr << msg << "\n";
	}
	return 0;
}
