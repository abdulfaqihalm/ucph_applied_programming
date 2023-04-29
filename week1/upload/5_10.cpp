#include "5_10.h"
#include <iostream>

void guassian_elimination(double **A, double *b, double *u, int n){
    // With Pivot
    double M_i; 
    double p_i;
    int n_p; 
    for(int i=1; i<n; i++){
        for(int j=i; j<n; j++){
            M_i = A[j][i-1]/A[i-1][i-1];
            for (int k=0; k<n; k++){
                if(k>=i){
                    A[j][k] = A[j][k] - M_i*A[i-1][k]; 
                } else {
                    A[j][k] = 0;
                }
            }
            b[j] = b[j] - M_i*b[i-1];
        }
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

        // Construct Matrix P 
        if(n_p!=i) {
            // init P
            double P[n][n];
            for(int k=0; k<n; k++){
                for(int l=0; l<n; l++){
                    if((k==l) && l!=i && l!=n_p){
                        P[k][l] = 1;
                    } else if(k==i && l==n_p){
                        P[k][l] = 1;
                    }else if(k==n_p && l==i){
                        P[k][l] = 1;
                    }
                    else {
                        P[k][l] = 0;
                    }
                }
            }

            double A_new [n][n]; 
            double b_new [n];
            for(int k=0; k<n; k++){
                b_new[k] = 0;
                for(int l=0; l<n; l++){
                    A_new[k][l] = 0;
                    for(int m=0; m<n; m++){
                        A_new[k][l] += P[k][m]*A[m][l];
                    }
                    b_new[k] += b[l]*P[k][l];
                }
            }
            for(int k=0; k<n; k++){
                for(int l=0; l<n; l++){
                    A[k][l] = A_new[k][l];
                }
                b[k] = b_new[k];
            }
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