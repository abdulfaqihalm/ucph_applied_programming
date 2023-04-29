#include "2_6.h"
#include <cmath>
#include <iostream>

double newton_Raphson(double initialGuess, double epsilon){
    double f_x, f_prime_x;
    double x_prev, x_next;
    x_prev = x_next = initialGuess;
    
    for(int i=0; i<100; i++){
        f_x = exp(x_prev) + pow(x_prev, 3.0) - 5.0;
        f_prime_x = exp(x_prev) + 3*pow(x_prev, 2.0);
        x_next = x_prev - (f_x/f_prime_x);
        if(fabs(x_next - x_prev) < epsilon){
            break;
        }else{
            x_prev = x_next;
        }
    }
    return x_next;
}