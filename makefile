all: utStruct

utStruct: mainTest.o# variable.o
ifeq ($(OS),Windows_NT)
	g++ -o utStruct mainTest.o -lgtest
else
	g++ -o utStruct mainTest.o -lgtest -lpthread
endif
mainTest.o: mainTest.cpp struct.h atom.h number.h utStruct.h# variable.h
	g++ -std=gnu++0x -c mainTest.cpp
##variable.o: variable.cpp variable.h
##	g++ -std=gnu++0x -c variable.cpp
clean:
	rm -f *.o utStruct
stat:
	wc *.h *.cpp
