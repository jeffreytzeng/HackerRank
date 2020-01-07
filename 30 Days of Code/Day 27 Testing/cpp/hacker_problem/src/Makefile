clean: run
	@del test.exe

run: compile
	@./test

compile:
	@g++ -I../test_class -o test main.cpp minimum.hpp ../test_class/test_class.hpp