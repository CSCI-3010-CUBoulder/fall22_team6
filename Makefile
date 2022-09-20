
CXX = g++  # the compiler
CXXFLAGS = -std=c++17 -Wall

all: test

clean:
	del *.o *.exe

test:
	$(CXX) $(CXXFLAGS) test.cpp -o test
