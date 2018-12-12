#pragma once
/**
	 @author Dov Kruger

	 Experimental Wrapper for OpenGL VBO drawling of lines
	 If we can get this to work, then create a base class, pull vboID up
	 and create any number of objects that work the same way.	 
 */
class GLLines {
private:
	GLuint vboID; // the id for the graphics card-resident storage
	uint32_t size; // the number of points
public:

	/*
		Give this a list of xyz points and it will load them onto the graphics card and draw them later
	 */
	GLLines(const float xyzpoints[], uint32_t size) : size(size) {
		glGenBuffers(1, &vboID);
		glBindBuffer(GL_ARRAY_BUFFER, vboID);
		glBufferData(GL_ARRAY_BUFFER, size, xyzpoints, GL_STATIC_DRAW);
	}

	/*
		draw renders the lines fast to the screen
	*/
	void draw() const {
		glEnableVertexAttribArray(0);
		glBindBuffer(GL_ARRAY_BUFFER, vboID);
		//TODO: maybe the parameter in the shader should be a parameter in the constructor...
		glVertexAttribPointer
			(0,            // parameter 0 of shader
			 3,            // size
			 GL_FLOAT,     // type
			 GL_FALSE,     // normalized?
			 0,            // stride
			 (void*)0      // array buffer offset
			 );
		// Draw the triangle !
		glDrawArrays(GL_LINES, 0, size);
		glDisableVertexAttribArray(0);
	}
};
