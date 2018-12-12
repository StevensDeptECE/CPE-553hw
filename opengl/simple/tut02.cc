#include <iostream>
#include "GLWin.hh"
using namespace std;

class Tut02 : public GLWin {
private:
	GLuint vboID;
	static const GLfloat unitCubeFloats[];
public:
	Tut02() : GLWin(1000,600, "Tut02", "tut02.vs", "tut02.fs", Color(0,0,0)) {}
	void setup() override;
	void draw() const override;
};
	
const GLfloat Tut02::unitCubeFloats[] = {
	-1.0f,-1.0f,-1.0f,
	-1.0f,-1.0f, 1.0f,
	-1.0f, 1.0f, 1.0f,
	1.0f, 1.0f,-1.0f,
	-1.0f,-1.0f,-1.0f,
	-1.0f, 1.0f,-1.0f,
	1.0f,-1.0f, 1.0f,
	-1.0f,-1.0f,-1.0f,
	1.0f,-1.0f,-1.0f,
	1.0f, 1.0f,-1.0f,
	1.0f,-1.0f,-1.0f,
	-1.0f,-1.0f,-1.0f,
	-1.0f,-1.0f,-1.0f,
	-1.0f, 1.0f, 1.0f,
	-1.0f, 1.0f,-1.0f,
	1.0f,-1.0f, 1.0f,
	-1.0f,-1.0f, 1.0f,
	-1.0f,-1.0f,-1.0f,
	-1.0f, 1.0f, 1.0f,
	-1.0f,-1.0f, 1.0f,
	1.0f,-1.0f, 1.0f,
	1.0f, 1.0f, 1.0f,
	1.0f,-1.0f,-1.0f,
	1.0f, 1.0f,-1.0f,
	1.0f,-1.0f,-1.0f,
	1.0f, 1.0f, 1.0f,
	1.0f,-1.0f, 1.0f,
	1.0f, 1.0f, 1.0f,
	1.0f, 1.0f,-1.0f,
	-1.0f, 1.0f,-1.0f,
	1.0f, 1.0f, 1.0f,
	-1.0f, 1.0f,-1.0f,
	-1.0f, 1.0f, 1.0f,
	1.0f, 1.0f, 1.0f,
	-1.0f, 1.0f, 1.0f,
	1.0f,-1.0f, 1.0f
};

void Tut02::setup() {
	glGenBuffers(1, &vboID);
	glBindBuffer(GL_ARRAY_BUFFER, vboID);
	glBufferData(GL_ARRAY_BUFFER, sizeof(unitCubeFloats), unitCubeFloats,
							 GL_STATIC_DRAW);
}

void Tut02::draw() const {
		glEnableVertexAttribArray(0);
		glBindBuffer(GL_ARRAY_BUFFER, vboID);
		glVertexAttribPointer
			(0,            // parameter 0 of shader
			 3,            // size
			 GL_FLOAT,     // type
			 GL_FALSE,     // normalized?
			 0,            // stride
			 (void*)0      // array buffer offset
			 );
		// Draw the triangle !
		glDrawArrays(GL_TRIANGLES, 0, 12*3); // 12*3 indices starting at 0 -> 12 triangles

		glDisableVertexAttribArray(0);
	}

int main() {
	try {
		Tut02 t;
		t.waitLoop();
	} catch (const char msg[]) {
		cerr << msg << "\n";
	}
	return 0;
}
