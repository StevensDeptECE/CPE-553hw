#include <iostream>
#include <vector>
#include "GLWin.hh"
#include "GLTriangles.hh"

using namespace std;

class Tut03 : public GLWin {
private:
	vector<GLTriangles> drawList;
public:
	Tut03() : GLWin(1000,600, "Tut03", "tut03.vs", "tut03.fs", Color(1,0,0)) {}
	void setup() override;
	void draw() const override;
};

void Tut03::setup() {
#if 0
	static GLfloat xyz[] = {
		0,0,0,
		100,100,0,
		100,200,0,
		0,200,0
	};
#endif
	static GLfloat xyz[] = {
		-1, -1, 0,
		 1, -1, 0,
		 0,  1, 0
	};
	drawList.push_back(GLTriangles(xyz, 3));
}

void Tut03::draw() const {
	for (auto& d : drawList) {
		d.draw();
	}
}

int main() {
	try {
		Tut03 t;
		t.waitLoop();
	} catch (const char msg[]) {
		cerr << msg << "\n";
	}
	return 0;
}
