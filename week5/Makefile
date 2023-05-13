tester: 
	cxxtestgen --error-printer -o test/runner.cpp test/NewVectorTest.hpp test/NewMatrixTest.hpp
	clang++ -std=c++11 -o bin/test/runner.exe -I../../cxxtest  test/runner.cpp

#cxxtestgen --error-printer -o test/runner.cpp test/NewMatrixTest.hpp
#cxxtestgen --error-printer -o test/runner.cpp test/VectorTest.hpp test/MatrixTest.hpp
# test/MatrixTest.hpp
#./bin/test/runner.exe