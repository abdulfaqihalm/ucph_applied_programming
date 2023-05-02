#include "5_10.h"
#include <cmath>
#include <iostream>

void guassian_elimination(double **A, double *b, double *u, int n){
    // With Pivot
    double M_i; 
    double p_i;
    int n_p; 
    for(int i=0; i<n; i++){
        // Pivoting
        // Finding max switching row index
        // p_i is the maximum 
        p_i = A[i][i];
        n_p = i;
        for(int j=i; j<n; j++){
            if(abs(p_i)<abs(A[j][i])){
                p_i = A[j][i];
                n_p = j;
            }
        }

        // Swapping 
        if(n_p!=i) {
            std::cout << "Switch " << i << " with: " << n_p << "\n";
            double temp_A [n];
            for(int k=0; k<n; k++){
                temp_A[k] = A[i][k];
                A[i][k] = A[n_p][k];
                A[n_p][k] = temp_A[k];
            }
            double temp_b = b[i];
            b[i] = b[n_p];
            b[n_p] = temp_b;
        }
        
        // Gaussian Elemination
        for(int j=i+1; j<n; j++){
            M_i = A[j][i]/A[i][i];
            for (int k=0; k<n; k++){
                if(k>=i){
                    A[j][k] = A[j][k] - M_i*A[i][k]; 
                } else {
                    A[j][k] = 0;
                }
            }
            b[j] = b[j] - M_i*b[i];
        }
    }

    // Finding the root
    // init value 
    u[n-1] = b[n-1]/A[n-1][n-1];
    for(int i=n-2; i>=0; i--){ 
        double sum_A_x = 0;
        for(int j=n-1; j>i; j--){
            sum_A_x += A[i][j]*u[j];
        } 
        u[i] = (b[i] - sum_A_x)/A[i][i];
    }
}