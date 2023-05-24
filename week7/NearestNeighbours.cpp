#include <iostream>
#include <map>
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

    double sum;
    for(int i=0; i<testRows; i++){
        arma::vec distVect(trainRows); 
        arma::uvec distVectSortIndex(trainRows);
        int sum_min_1 = 0;
        int sum_1 = 0;

        for(int j=0; j<trainRows; j++){
            sum = 0.0;
            for(int k=0; k<trainDims; k++){
                sum += pow(dataX(j,k) - dataXTest(i,k), 2);
            }
            sum = sqrt(sum);
            distVect(j) = sum;
        }

        distVectSortIndex = arma::sort_index(distVect); 
        std::map<int, uint> neighbours;
        // 5-neighbours - hard coded
        for(int n=0; n<5; n++){
            int neighbourClass = dataY(distVectSortIndex(n)); 
            if(neighbours.count(neighbourClass)){
                neighbours[neighbourClass] += 1;
            } else {
                neighbours[neighbourClass] = 0;
            }
        }

        // hard coded class
        if (neighbours[1] > neighbours[-1]){
            dataYTest[i] = 1;
        } else {
            dataYTest[i] = -1;
        }
    }


    dataYTest.save("./NN.dat", arma::csv_ascii);
    return 0;
}
