#include <iostream>
#include "src/Vector.hpp"
#include "src/Matrix.hpp"
#include "src/SparseVector.hpp"

int main()
{
    // test the classes.. clang++ -std=c++11 -o main.exe main.cpp
  /*   Vector<int> v(3);
    for(int i=0; i<3; i++){
        v[i] = i;
        std::cout << v[i];
    }   
    Vector<int> v_prime(v);
    for(int i=0; i<3; i++){
        std::cout << v_prime[i];
    }
    Vector<int> result(3);
    result = v + v_prime;
    for(int i=0; i<3; i++){
        std::cout << result[i];
    }

    std::cout << v.CalculateNorm(); */


    SparseVector<int> sV(3);
    sV.setValue(0, 2);
    for(int i=0; i<3; i++){
        std::cout << sV.getValue(i);
    }

    return 0;
}