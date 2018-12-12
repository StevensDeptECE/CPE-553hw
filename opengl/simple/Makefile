WINLIBS	:= -L x86_64-w64-mingw32/lib -lglfw3 -lopengl32 -lgdi32
LINUXLIBS	:=-L /usr/lib/x86_64-linux-gnu/ -lglfw -lGL
WININC	:= -I/d/MSYS64/mingw64/include/mesa/GL
LINUXINC	:=


INC	:= $(LINUXINC)
LIBS	:= $(LINUXLIBS)

COMP	:= g++ -std=c++11 -g -I.. $(INC)

all: tut01 tut02 tut03

TUT01_OBJ := tut01.o GLWin.o glew.o
tut01: $(TUT01_OBJ)
	$(COMP) $(TUT01_OBJ) -o tut01 $(LIBS)

TUT02_OBJ := tut02.o GLWin.o glew.o
tut02: $(TUT02_OBJ)
	$(COMP) $(TUT02_OBJ) -o tut02  $(LIBS)

TUT03_OBJ := tut03.o GLWin.o glew.o
tut03: $(TUT03_OBJ)
	$(COMP) $(TUT03_OBJ) -o tut03  $(LIBS)

SIMPLE_OBJ := simple.o simplegl.o texture.o glew.o

simple: $(SIMPLE_OBJ)
	$(COMP) $(SIMPLE_OBJ) -o simple $(LIBS)

simple.o: simple.cc simplegl.hh
	$(COMP) -c simple.cc

GLWin.o: GLWin.cc GLWin.hh
	$(COMP) -c GLWin.cc

texture.o: texture.cpp GLWin.hh
	$(COMP) -c $<

glew.o: glew.c
	$(COMP) -c glew.c

.cc.o: GLWin.hh
	$(COMP) -c $<

tut03.o: GLTriangles.hh

test:
	g++ -std=c++11 -g test.cc GLWin.cc glew.o -o test -lglfw -lGL 
clean:
	rm *.o tut01 tut02
