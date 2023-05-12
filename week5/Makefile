tester: 
	cxxtestgen --error-printer -o test/runner.cpp test/VectorTest.hpp test/MatrixTest.hpp
	clang++ -std=c++11 -o bin/test/runner.exe -I../../cxxtest  test/runner.cpp


#./bin/test/runner.exe