#include <iostream>
#include <cmath>
#include "armadillo.hpp"

int main(int argc, char* argv[]){
    arma::mat dataX, dataXTest;
    arma::vec dataY;
    dataX.load("./data/dataX.dat");
    dataXTest.load("./data/dataXtest.dat");
    dataY.load("./data/dataY.dat");

    // iterating through each point 
    int trainDims = size(dataX)[1];
    int trainRows = size(dataX)[0];
    int testRows = size(dataXTest)[0];
    arma::ivec dataYTest(testRows); 

    const double epsilon = 1.0e-7;
    const double alpha = 0.5; 

    // learning process 
    arma::vec weight(trainDims, arma::fill::zeros);
    arma::vec dL_dw(trainDims, arma::fill::zeros); 
    while(true){
        for(int i=0; i < trainRows; i++){
            dL_dw = dL_dw + ( dataY(i) * 1.0/(1 + exp(arma::as_scalar(dataY[i] * (weight.t() * dataX.row(i).t())))) * dataX.row(i).t() );
        }
        dL_dw = -dL_dw/trainRows;
        weight = weight - (alpha*dL_dw);
        if(arma::norm(dL_dw)<epsilon){
            break;
        }
    }

    // predicting process
    double pred;
    for(int i=0; i<testRows; i++){
        pred = as_scalar(weight.t()*dataXTest.row(i).t());
        if(pred<0){
            dataYTest(i) = -1;
        } else{
            dataYTest(i) = 1;
        }

    }
    dataYTest.save("./LogReg.dat", arma::csv_ascii);

    return 0;
}