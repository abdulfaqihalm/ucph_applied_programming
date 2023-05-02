#include "3_3.h"
#include <fstream> 

void implicit_Euler(int n){
    double x = 0.0;
    double y = 1.0;
    double h = 1.0/(n-1.0);

    std::ofstream write_output("xy.dat");
    if(write_output.is_open()){
        for(int i=0; i<n; i++){
            write_output << x << "," << y;
            if(i!=n-1) write_output << "\n";
            x = x + h;
            y = y - y*h;
        }  
        write_output.close();
    }
}