CXX = g++
CXXFLAG = -L../../../lib -lgtest -lpthread -std=gnu++11
INCLUDE = -I./ -I../../src -I../../../googletest/include -I../../../googletest/src
CPP = ../../src/add.cpp test.cpp main_test.cpp

clean: run
	@del run.exe

run: test
	@./run

test:
	@$(CXX) $(INCLUDE) $(CPP) $(CXXFLAG) -o run

