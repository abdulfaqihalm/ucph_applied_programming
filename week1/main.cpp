#include <iostream>
#include "upload/2_6.h" 
#include "upload/3_3.h" 
#include "upload/5_3.h" 
#include "upload/5_4.h" 
#include "upload/5_6.h" 
#include "upload/5_9.h" 
#include "upload/5_10.h" 

void print_matrix(double** M, int nrows, int ncols);
void print_vector(double* v, int n);

int main(int argc, char *argv[])
{
    /* // 2_6
    double x = 0.0; 
    double epsilon = 1.0e-6;
    x = newton_Raphson(x, epsilon);
    std::cout << "Result X: " << x << "\n";
    */

    // 3_3
    // int n = atoi(argv[1]); 
    // assert(n>1);
    // implicit_Euler(n);

    // 5_3
    /* double a = 1.0;
    double b = 2.0; 
    std::cout << "a: " << a << " b: " << b << "\n";
    swap_pointer(&a,&b);
    std::cout << "a: " << a << " b: " << b << "\n\n";
    a = 1.0;
    b = 2.0; 
    std::cout << "a: " << a << " b: " << b << "\n";
    swap_ref(a,b);
    std::cout << "a: " << a << " b: " << b << "\n"; */

    /* // 5_4
    int n = 10;
    // double A[10]{-0.3242877,0.7543678,-0.4076870,0.1828510,0.5492088,0.1156163,0.2510583,0.9385255,1.7074664,0.6429289};
    double A[10]{1,1,1,1,1,1,1,1,1,1};
    double mean = calc_mean(A, n);
    double std = calc_std(A, n);
    std::cout << "mean: " << mean << " std: " << std << "\n"; */

    /* // 5_6
    int A_rows = 3; 
    int A_cols = 3; 
    int B_rows = 3;
    int B_cols = 3; 
    
    // Define A 
    double** A = new double*[A_rows];
    for(int i=0; i<A_rows; i++){
        A[i] = new double[A_cols];
    }

    double el = 0.0;
    for(int i=0; i<A_rows; i++){
        for(int j=0; j<A_cols; j++){
            el += 1.0;
            A[i][j] = el; 
        }
    }

    // Define B
    double** B = new double*[B_rows];
    for(int i=0; i<B_rows; i++){
        B[i] = new double[B_cols];
    }

    el = 0.0;
    for(int i=0; i<B_rows; i++){
        for(int j=0; j<B_cols; j++){
            el += 2.0;
            B[i][j] = el; 
        }
    }

    //Define a; 
    double* a = new double[A_cols];
    for(int i=0; i<A_cols; i++){
        a[i] = 1;
    }
    //Define b; 
    double* b = new double[B_rows];
    for(int i=0; i<B_rows; i++){
        b[i] = 1;
    }

    std::cout << "A: \n";
    print_matrix(A, A_rows, A_cols);

    std::cout << "B: \n";
    print_matrix(B, B_rows, B_cols);

    // res1 (Matrix multiplication AxB)
    double** res1 = new double*[A_rows];
    for(int i=0; i<A_rows; i++){
        res1[i] = new double[B_cols];
    }
    
    std::cout << "res1 (Matrix multiplication AxB): \n";
    Multiply(res1, A, B, A_rows, A_cols, B_rows, B_cols);
    print_matrix(res1, A_rows, B_cols);


    // res2 (Vector x Matrix)
    double* res2 = new double[B_cols];
    
    std::cout << "res2 (Vector x Matrix): \n";
    Multiply(res2, a, B, A_cols, B_rows, B_cols);
    print_vector(res2, B_cols);


    // res3 (Vector x Matrix)
    double* res3 = new double[A_rows];
    
    std::cout << "res2 (Vector x Matrix): \n";
    Multiply(res3, A, b, A_rows, A_cols, B_rows);
    print_vector(res3, A_rows);

    // scalar
    double scalar = 2.0;
    // res4 (vector x scalar)
    double** res4 = new double*[B_rows];
    for(int i=0; i<B_rows; i++){
        res4[i] = new double[B_cols];
    }
    
    std::cout << "res4 (vector x scalar): \n";
    Multiply(res4, scalar, B, B_rows, B_cols);
    print_matrix(res4, B_rows, B_cols);
    
    scalar = 3.0;
    std::cout << "res4 (scalar x vector): \n";
    Multiply(res4, B, scalar, B_rows, B_cols);
    print_matrix(res4, B_rows, B_cols);



    // delete matrix A, B 
    for(int i=0; i<A_rows; i++){
        delete[] A[i];
    }
    delete[] A;
    for(int i=0; i<B_rows; i++){
        delete[] B[i];
    }
    delete[] B;

    // delete vector a, b
    delete[] a;
    delete[] b;

    // delete res1
    for(int i=0; i<A_rows; i++){
        delete[] res1[i];
    }
    delete[] res1;

    // delete res2, res3 
    delete[] res2;
    delete[] res3;

    // delete res4
    for(int i=0; i<B_rows; i++){
        delete[] res4[i];
    }
    delete[] res4; */


    // 5_9
    // Non Pivot test cases
    /* int A_rows = 3; 
    int A_cols = 3; 
    int n = 3; 
    
    // Define A 
    double** A = new double*[A_rows];
    for(int i=0; i<A_rows; i++){
        A[i] = new double[A_cols];
    }
    // Define b 
    double* b = new double[n];  */

    // Solution 1, 2, 3
    /* A[0][0] = 1; A[0][1] = 2; A[0][2] = -1;
    A[1][0] = 1; A[1][1] = -1; A[1][2] = 2;
    A[2][0] = 2; A[2][1] = 2; A[2][2] = 2;
    b[0] = 2; b[1] = 5; b[2] = 12; */

    // Solution -2, 3, 1
    /* A[0][0] = -1; A[0][1] = 2.0/3.0; A[0][2] = -2;
    A[1][0] = 5; A[1][1] = 7; A[1][2] = -5;
    A[2][0] = 1.0/4.0; A[2][1] = 1; A[2][2] = -1.0/2.0;
    b[0] = 2; b[1] = 6; b[2] = 2; */


    // Pivot Test Case 

    // int n = 4; 
    // int A_rows = 4; 
    // int A_cols = 4; 
    
    // // Define A 
    // double** A = new double*[A_rows];
    // for(int i=0; i<A_rows; i++){
    //     A[i] = new double[A_cols];
    // }
    // // Define b 
    // double* b = new double[n];

    // Solution 1,2,3,4
    // A[0][0] = 2; A[0][1] = 4; A[0][2] = -2; A[0][3] = -2;
    // A[1][0] = 1; A[1][1] = 2; A[1][2] = 4; A[1][3] = -3;
    // A[2][0] = -3; A[2][1] = -3; A[2][2] = 8; A[2][3] = -2;
    // A[3][0] = -1; A[3][1] = 1; A[3][2] = 6; A[3][3] = -3;
    // b[0] = -4; b[1] = 5; b[2] = 7; b[3] = 7;
    // Solution 1,2,3,4
    // A[0][0] = 2; A[0][1] = 1; A[0][2] = 1; A[0][3] = 0;
    // A[1][0] = 4; A[1][1] = 3; A[1][2] = 3; A[1][3] = 1;
    // A[2][0] = 8; A[2][1] = 7; A[2][2] = 9; A[2][3] = 5;
    // A[3][0] = 6; A[3][1] = 7; A[3][2] = 9; A[3][3] = 8;
    // b[0] = 4; b[1] = 6; b[2] = 8; b[3] = -2;

    // // Define u 
    // double* u = new double[n];
 
    // /* solve3by3(A, b, u);
    // print_vector(u, 3); */

    // std::cout << "Matrix A: " << "\n";
    // print_matrix(A,n,n);
    // std::cout << "Vector b: " << "\n";
    // print_vector(b, n);
    // guassian_elimination(A, b, u, n);
    // std::cout << "Matrix A_new: " << "\n";
    // print_matrix(A,n,n);
    // std::cout << "Vector b_new: " << "\n";
    // print_vector(b, n);
    // std::cout << "Vector u_new: " << "\n";
    // print_vector(u, n);

    // // Delete A, b, u
    // for(int i=0; i<A_rows; i++){
    //     delete[] A[i];
    // }
    // delete[] A;
    // delete[] b;
    // delete[] u;

    return 0;

}
//clang++ -Wall -std=c++11 -O -g -o main  main.cpp add.cpp

void print_matrix(double** M, int nrows, int ncols){
    for(int i=0; i<nrows; i++){
        for(int j=0; j<ncols; j++){
            std::cout << M[i][j];
            if(j!=ncols-1){
                std::cout << " ";
            }else{
                std::cout << "\n";
            }
        }
    }
}

void print_vector(double* v, int n){
    for(int i=0; i<n; i++){
        std::cout << v[i];
        if(i!=n-1){
            std::cout << " ";
        }else{
            std::cout << "\n";
        }
    }
}