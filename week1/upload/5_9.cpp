#include "5_9.h"

void solve3by3(double **A, double *b, double *u){
    // find the Transpose of A
    double A_T[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            A_T[i][j]=A[j][i];
        }
    }
    // Find the determinant 2x2 of A_T
    // 0,0 
    double d1 = A_T[1][1]*A_T[2][2] - A_T[1][2]*A_T[2][1];
    // 0,1 
    double d2 = A_T[1][0]*A_T[2][2] - A_T[1][2]*A_T[2][0];
    // 0,2 
    double d3 = A_T[1][0]*A_T[2][1] - A_T[1][1]*A_T[2][0]; 
    // 1,0 
    double d4 = A_T[0][1]*A_T[2][2] - A_T[0][2]*A_T[2][1];
    // 1,1 
    double d5 = A_T[0][0]*A_T[2][2] - A_T[0][2]*A_T[2][0];
    // 1,2 
    double d6 = A_T[0][0]*A_T[2][1] - A_T[0][1]*A_T[2][0];
    // 2,0 
    double d7 = A_T[0][1]*A_T[1][2] - A_T[0][2]*A_T[1][1];
    // 2,1 
    double d8 = A_T[0][0]*A_T[1][2] - A_T[0][2]*A_T[1][0];
    // 2,2 
    double d9 = A_T[0][0]*A_T[1][1] - A_T[0][1]*A_T[1][0];
    // find the adjuvant of A
    double Adj_A[3][3] = {
        {d1, -d2, d3},
        {-d4, d5, -d6},
        {d7, -d8, d9}
    };

    // find determinant of A
    double det_A =  A[0][0]*(A[1][1]*A[2][2] - A[1][2]*A[2][1]) - 
                    A[0][1]*(A[1][0]*A[2][2] - A[1][2]*A[2][0]) + 
                    A[0][2]*(A[1][0]*A[2][1] - A[1][1]*A[2][0]);
    
    double A_inv[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            A_inv[i][j] = Adj_A[i][j]/det_A;
        }
    }
    
    for(int i=0; i<3; i++){
        for(int k=0; k<3; k++){
            u[i] += b[k]*A_inv[i][k];
        }
    }
}