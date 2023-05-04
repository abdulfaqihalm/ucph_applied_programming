#include <iostream> 
#include "upload/ComplexNumber.hpp"
#include "upload/CalculateExponential.hpp"
#include "upload/Matrix2x2.hpp"

int main(int argc, char* argv[]){
    // 6.1.1-6
    // clang++ -Wall -std=c++11 -O -g -o main.exe  main.cpp upload/ComplexNumber.cpp
    /* ComplexNumber z1(4.0, 3.0);
    std::cout << "z1="<< z1 <<"\n";
    std::cout << "modulus=" << z1.CalculateModulus() << "\n";
    std::cout << "arg=" << z1.CalculateArgument() << "\n";
    z1.SetConjugate();
    std::cout << "z1="<< z1 <<"\n"; */

    // 6.1.7 
    // // clang++ -Wall -std=c++11 -O -g -o main.exe  main.cpp upload/CalculateExponential.cpp upload/ComplexNumber.cpp
    // // Create dynamic complex number array
    // ComplexNumber** A = new ComplexNumber*[3];
    // ComplexNumber** res = new ComplexNumber*[3];
    // for(int i=0; i<3; i++){
    //     A[i] = new ComplexNumber[3]; 
    //     res[i] = new ComplexNumber[3];
    // } 

    // A[0][0] = ComplexNumber(2,3); A[1][1] = ComplexNumber(4,5); A[2][2] = ComplexNumber(6,7);

    // /* (0.5 + 9i) (0 + 0i) (0 + 0i)
    // (0 + 0i) (0.5 + 25i) (0 + 0i)
    // (0 + 0i) (0 + 0i) (0.5 + 49i) */
    // CalculateExponential(A, 2, res); 

    // // Delete  dynamic complex number array
    // for(int i=0; i<3; i++){
    //     delete[] A[i]; 
    //     delete[] res[i];
    // } 
    // delete[] A;
    // delete[] res;

    // 6.2 
    // clang++ -Wall -std=c++11 -O -g -o main.exe  main.cpp upload/Matrix2x2.cpp 
    Matrix2x2 A(5, 2, -7, -3);
    // 3 2 -7 -5
    A = A.CalcInverse();
    // 6 4 -14 -10
    A.MultScalar(2);

    return 0;
}