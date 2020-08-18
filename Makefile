PROGRAM = Prog
INSTALL = opt/$(PROGRAM)

GUI = 
LIB = 
SQL = 

SRC = main.cpp

PKGS = archi.h

ESPECIAL = 

VALACOPTS =

BUILT_ROOT = 1

all:
	g++ -Wall -o $(PROGRAM) $(PKGS) $(SRC)

clean:
	@rm -v -fr *~ *.c *.h *.o $(PROGRAM)
