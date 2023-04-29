#include "5_4.h"
#include <iostream>
#include <cmath>

double calc_std(double a[], int length){
    double mean = calc_mean(a, length);
    double sum = 0.0;

    for(int i=0; i<length; i++){
        sum += pow((a[i]-mean),2);
    }
    if(length==1){
    return 0.0;
    }else{
        return sqrt(sum/((double) length-1));
    }
}

double calc_mean(double a[], int length){
    double sum = 0.0;  
    for(int i=0; i<length; i++){
        sum += a[i];
    }
    return sum/((double) length);
}