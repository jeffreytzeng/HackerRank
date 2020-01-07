1. Download and install cmake from https://cmake.org/<br />
	I'm downloaded cmake-3.16.2-win64-x64.exe

2. Installing pthread package from mingw installer<br />
	My gcc/g++ version is 8.2.0

3. Setting mingw environment variable in windows path by move target mingw upward to first of all mingw versions.

4. Download gtest from github:<br />
	git clone https://github.com/google/googletest

5. Using cmake to build gtest:
	1) cd googletest
	2) mkdir build
	3) cd build
	4) cmake -G "MinGW Makefiles" -DLIB_MAN=OFF -DCMAKE_INSTALL_PREFIX=C:\MinGW\bin -B. ..[1]<br />
		this should appear:

			-- The C compiler identification is GNU 8.2.0
			-- The CXX compiler identification is GNU 8.2.0
			-- Check for working C compiler: C:/MinGW/bin/gcc.exe
			-- Check for working C compiler: C:/MinGW/bin/gcc.exe -- works
			-- Detecting C compiler ABI info
			-- Detecting C compiler ABI info - done
			CMake Error at C:/Program Files/CMake/share/cmake-3.16/Modules/CMakeDetermineCompilerABI.cmake:72 (file):
			  file STRINGS file
			  "D:/googletest/build/CMakeFiles/3.16.2/CMakeDetermineCompilerABI_C.bin"
			  cannot be read.
			Call Stack (most recent call first):
			  C:/Program Files/CMake/share/cmake-3.16/Modules/CMakeTestCCompiler.cmake:74 (CMAKE_DETERMINE_COMPILER_ABI)
			  CMakeLists.txt:10 (project)


			-- Detecting C compile features
			-- Detecting C compile features - done
			-- Check for working CXX compiler: C:/MinGW/bin/g++.exe
			-- Check for working CXX compiler: C:/MinGW/bin/g++.exe -- works
			-- Detecting CXX compiler ABI info
			-- Detecting CXX compiler ABI info - done
			-- Detecting CXX compile features
			-- Detecting CXX compile features - done
			-- Found PythonInterp: C:/Users/2013g/AppData/Local/Programs/Python/Python38-32/python.exe (found version "3.8")
			-- Configuring incomplete, errors occurred!
			See also "D:/googletest/build/CMakeFiles/CMakeOutput.log".

		ignore error since no CMakeDetermineCompilerABI_C.bin file.
	5) cmake ..<br />
		this should appear:

			-- Configuring done
			-- Generating done
			-- Build files have been written to: D:/googletest/build

	6) Fixing some errors in googletest\CMakeLists.txt<br />
        Adding two settings and comment out one line as following:

        if (CMAKE_VERSION VERSION_LESS "3.1")<br />
          add_definitions(-std=c++11)<br />
        else()<br />
          // Using gnu++11 instead c++11 for more looser rule[2]<br />
          set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")<br />
          // Ignore "'int gettimeofday(timeval*, void*)' is deprecated" warning[3]<br />
          set(CMAKE_CXX_FLAGS "-Wno-deprecated-declarations")<br />
          // Comment out following line<br />
        // #  set(CMAKE_CXX_STANDARD 11)<br />
          set(CMAKE_CXX_STANDARD_REQUIRED ON)<br />
          if(NOT CYGWIN AND NOT MSYS)<br />
            set(CMAKE_CXX_EXTENSIONS OFF)<br />
          endif()<br />
        endif()<br />

	7) mingw32-make<br />
		this should appear:

			-- Configuring done
			-- Generating done
			-- Build files have been written to: D:/googletest/build
			[ 12%] Building CXX object googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.obj
			[ 25%] Linking CXX static library ..\lib\libgtest.a
			[ 25%] Built target gtest
			Scanning dependencies of target gmock
			[ 37%] Building CXX object googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.obj
			[ 50%] Linking CXX static library ..\lib\libgmock.a
			[ 50%] Built target gmock
			Scanning dependencies of target gmock_main
			[ 62%] Building CXX object googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.obj
			[ 75%] Linking CXX static library ..\lib\libgmock_main.a
			[ 75%] Built target gmock_main
			Scanning dependencies of target gtest_main
			[ 87%] Building CXX object googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.obj
			[100%] Linking CXX static library ..\lib\libgtest_main.a
			[100%] Built target gtest_main

6. Writing test code and source code which wanted to be tested:<br />
	Files in folders test/src/ and src/

7. Copying lib folder build from cmake and gtest src folder to test code folder.

8. Going to test code folder and enter following compile command:<br />
	a. my_sample:

		g++ -I../../../googletest/include -I../../src -I../../../googletest/src -L../../../lib -std=gnu++11 ../../src/add.cpp test.cpp main_test.cpp -lgtest -lpthread

	b. hacker_problem:

		g++ -std=gnu++11 -L../../lib -I../../googletest/include -I../../googletest/src -o test main_test.cpp ../src/minimum.hpp test_gtest.cpp -lgtest -lpthread

9. Executing a.exe executable file in my_sample:<br />
	this should appear:

		[==========] Running 1 test from 1 test suite.
		[----------] Global test environment set-up.
		[----------] 1 test from AdditionTest
		[ RUN      ] AdditionTest.AddTwo
		[       OK ] AdditionTest.AddTwo (0 ms)
		[----------] 1 test from AdditionTest (0 ms total)

		[----------] Global test environment tear-down
		[==========] 1 test from 1 test suite ran. (15 ms total)
		[  PASSED  ] 1 test.

10. Using Makefile:
	a. "@" means not echo command when executes.<br />
	b. Make only executes first tag and it's associate tags.<br />
	c. Linking flags must go last in the command as following.<br />

	1) my_sample:<br />

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

	2) HackerRank problem:

			clean: run
				@del test.exe

			run: compile
				@./test

			compile:
				@g++ -std=gnu++11 -L../../lib -I../../googletest/include -I../../googletest/src -o test main_test.cpp ../src/minimum.hpp test_gtest.cpp -lgtest -lpthread

[1]: https://stackoverflow.com/questions/59355908/mingw-c-compiler-not-able-to-compile-a-simple-test-program
[2]: https://stackoverflow.com/questions/10851247/how-do-i-activate-c-11-in-cmake
[3]: https://github.com/google/googletest/issues/2625
