clean: run
	@del test.exe

run: compile
	@./test

compile:
	@g++ -std=gnu++11 -L../../lib -I../../googletest/include -I../../googletest/src -o test main_test.cpp ../src/minimum.hpp test_gtest.cpp -lgtest -lpthread