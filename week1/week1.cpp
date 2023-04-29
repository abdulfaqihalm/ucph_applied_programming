// "#" is a preprocessor directive, or just directive
// preprocessor -> translation unit -> compiler
// it removes space comment and processing the "#"
// when use "#" preprocessor replace it by the code contains of that "#include"

// preprocessor directive which defined by #ifndef, #define, and #endif
// will doesn't need semicolon 
// it's defined by #<directive> <macros_name> e.g. #define USE_YEN
//  any further occurrence of the identifier is removed and replaced by nothing!

#define PRINT_JOE
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <fstream>
#include <memory>

// DEFINING FUNCTION PROTOTYPES
// A module is a collection of functions which performs a given task.
// Every module has inetrface which can be defined in the prototype.

// Note that a function can only return one variable 
// we have to use pointer to return (essentially changing outside vars)
// and create the void function on top of it. 
/**
 * @brief AllocateMatrixMemory
 * 
 * @param numRows 
 * @param numCols 
 * @return double** 
 */
double** AllocateMatrixMemory(int numRows, int numCols);

void FreeMatrixMemory(int numRows, double** matrix);
void CalculateRealAndImaginary(
    /**
 * Image associated with this map.
 *
 * @exceptsafe Shall not throw exceptions.
 */
    double r, double theta, 
    double* pReal, double* pImaginary
    );
/* We can aLSO use references variables as the arguments: 
void CalculateRealAndImaginary(
    double r, double theta, 
    double &pReal, double &pImaginary
    ); */

void DoSomethingonArray(double A[], double B[][3]);
// if it's dynamic, we can define: 
// void DoSomethingonArray(double* A, double** B);
// We can aLSO use references variables as the arguments: 

void CaculateCubeRoot(
    double* x, double K, double tolerance=1.0e-6,
    int maxIterations = 100);
// Solving newton-raphson with pointer to function
// Hence we can use several function 
double SolveNewton(
    double (*pFunc) (double),
    double (*pFuncPrime) (double),
    double x);
double SolveNewton(
    double (pFunc) (double),
    double (pFuncPrime) (double),
    double x);

double cube10(double x);
double cube10Prime(double x);

int main(int argc, char* argv[]) {
    /* Shift + option + A to multiple comment in Mac 
    adsfsdaf */
    // Alt + / for a line comment 

    // clang++ -Wall -std=c++11 -o week1__  week1.cpp   fro give warning to any unused var
    // clang++ -Wall -std=c++11 -O -o week1__  week1.cpp   fro give warning to any unused var
/*     int pin;
    std::string name;
    int coba = 0, number = 25;
    double tolerance = 1.0e-12;
    coba = 60;
    const double density = 45.678;

    // When using cmath its function reside in global namespace 
    // double x = 1.0, y = 2.0, z; 
    // z = sqrt(x);

    // Defining array the default values are "garbage", means nothing
    int arr1[2];
    double arr2[2][3];
    
    // Defining the default value of the array 
    int def_arr1[2] = {0};
    // Or defining each of the element 
    int def_arr2[3] = {0,1};

    // This will error 
    // arr1[2] = {1,2};

    // ASCII char 
    char letter = 'a'; // Notes the single quotation
    char str[] = "coba"; // Notes the double quotation
    std::string city; 
    city = "Oxford";
    float coba_cos = std::cos(50); */
/*     std::cout << "Hello world\n";
    // Will print the address of the matrix
    std::cout << def_arr1 << "\n";
    // Always use .flush() if we want to always print before crash
    std::cout.flush() << name; */

    // FLOW FUNCTION 
/*     int i = 0; 
    double y;
    if (i > 0) {
        y = 2.0;
    } else if (i == 0){
        y = 10.0;
    } else {
        y = 25.0;
    } */
    // std::cout << y;

    // The above can be written as case switch
/*     int h = 1;
    switch(h) {
        case 1:
            std::cout << "satu\n";
            break;
        case 0:
            std::cout << "nol\n";
            break;
        default:
            std::cout << "yang laen\n";
    }
    int cibi = 5;
    if (cibi = 4) {
        cibi = 6;
    }
    std::cout << cibi;

    // comparing two float 
    double bb = 3.6574513654767657;
    double cc = 3.65745;

    if (fabs(bb-cc) < 1.0e-8) {
        std::cout << "TRUE";
    } else {
        std::cout << "FALSE";
    } */

    // // FILE INPUT AND OUTPUT

    // double cibi[3] = {0.0, 1.0, 0.0};
    // double caba[3] = {0.0, 1.0, 1.0};
    // std::ofstream write_output("Output.data");
    // assert(write_output.is_open());
    // for (int i=0; i<3; i++) {
    //     write_output << cibi[i] << " " << caba[i] << "\n";
    // }
    // write_output.close();

    // std::ifstream read_file("Output.data");
    // assert(read_file.is_open());
    // double cubu[3], cebe[3];
    // int iter = 0;
    // while(!read_file.eof()) {
    //     read_file >> cubu[iter] >> cebe[iter];
    //     iter++;
    // }
    // read_file.close();
    // std::cout << cubu[0]<< cebe[0];
    // std::cout << cubu[1]<< cebe[1];
    // std::cout << cubu[2]<< cebe[2];

    // POINTERS 
/*     int total_sum = 10; 

    std::cout << "Total sum: " << total_sum << " Address: " << &total_sum << "\n";
 */
    // Point variables are variables which store address

    // double* p_x; //pointer to a double variable 
    // int* p_i; //pointer to an integer variable 
    // int *p_v, v; // p_v is pointer bu v is integer

    // v = 3.0 ;
    // p_v = &v;
    // std::cout << "p_v: " << p_v << " *p_v: " << *p_v << "\n";

    // v = 4.0 ;
    // std::cout << "p_v: " << p_v << " *p_v: " << *p_v << "\n";

    // // Aliasing, when variable accessed using different names.
    // *p_v = 5.0;
    // std::cout << "p_v: " << p_v << " *p_v: " << *p_v << "\n";
    // std::cout << "v: " << v << "\n";

    // // deleting the p_v memory. Will throu error due to unallocated pointer 
    // delete p_v;
    // std::cout << p_v << "\n";

    // Dynamic allocation of memory 
    // Use of pointers to dynamically allocate memory for arrays avoid the 
    // size estimation for an array
    // Memory can be allocated using "new" and deallocated using "delete"

    // Vectors
    // Create 1d array of double type with length 10 
    // vect store the address of the first element of the array
    // double* vect;
    // vect = new double[10];
    // std::cout << vect << "\n";
    // // Automatically de-reference from the pointer 
    // std::cout << vect[0] << "\n";
    // // Since it automatically de-reference, we have to use "&" to access the address
    // std::cout << &vect[0] << "\n";
    // // Would give the first element of the array 
    // std::cout << *vect << "\n";
    // // Would give the second element of the array 
    // std::cout << *(vect+1) << "\n";

    // delete[] vect;

    // // Pointer to Pointer 
    // double* p1 = new double[2];
    // double* p2 = new double[2];
    
    // p1[0] = 1.0; p1[1] = 2.0;
    // p2[0] = 3.0; p2[1] = 4.0;
    
    // double** A = new double*[2];
    // A[0] = p1;
    // A[1] = p2;
    
    // std::cout << A[0][0] << " " << A[0][1] << std::endl; // Output: 1 2
    // std::cout << A[1][0] << " " << A[1][1] << std::endl; // Output: 3 4
    
    // // The above code can also be used for dynamically allocated matrix 
    // int rows = 5, cols = 3;
    // double** B;
    // B = new double*[rows];
    // for (int i=0; i<rows; i++) {
    //     B[i] = new double[cols];
    // } // It's the same as A[5][4]

    // // Deallocate
    // for (int i=0; i<rows; i++){
    //     delete[] B[i];
    // }
    // delete[] B; //Deallocation need to be done twice due to we use "new" twice
    // delete[] p1;
    // delete[] p2;
    // delete[] A;

    // // We could also declare a lower triangluar matrix 
    // int** D; 
    // D = new int*[1000];
    // for (int i=0; i<1000; i++) {
    //     D[i] = new int[i+1];
    // }

    // std::cout << D[9][8] << "\n";
    // // Deallocate
    // for (int i=0; i<rows; i++){
    //     delete[] D[i];
    // }
    // delete[] D;

/*     // Unique ptr
    std::unique_ptr<int> p_x(new int);
    *p_x = 5;

    std::cout << *p_x  << "\n";
    // get raw pointer
    std::cout << p_x.get() << "\n";
    // only use get() when you need to access the raw pointer for a specific purpose, 
    // such as passing it to a function that expects a raw pointer.
    int* p_y = p_x.get(); 
    *p_y = 10;
    std::cout << "p_x: " << *p_x << " p_y: " << *p_y << "\n";

    std::unique_ptr<int> uptr(new int);
    // *uptr = 32431;
    int* raw_ptr = uptr.get();
    std::cout << "Value: " << *raw_ptr << std::endl; // Outputs: Value: 42
    
    //int* p_y = p_x.get(); // Get raw pointer 

    std::unique_ptr<int> p_z; 

    p_z = std::move(p_x);
    assert(p_z);
    assert(!p_x);
    p_z.reset(); // reset if we wanto to delete it other wise <memory> handles the deletion
    assert(!p_z);

    std::shared_ptr<int> p_w(new int);
    std::cout << "p_w use count: " << p_w.use_count() << "\n";
    *p_w = 555;
    std::shared_ptr<int> p_v; 
    p_v = p_w; 
    std::cout << "p_w use count: " << p_w.use_count() << "\n";
    p_v.reset();
    std::cout << "p_w use count: " << p_w.use_count() << "\n";
    p_w.reset();
    std::cout << "p_w use count: " << p_w.use_count() << "\n";
     */

/*     double** A; 
    A = AllocateMatrixMemory(5, 3);
    A[0][1] = 2.0;
    A[4][2] = 4.0; 
    std::cout << "A[0][1]: " << A[0][1] << "\n";
    std::cout << "A[1][1]: " << A[1][1] << "\n";
    std::cout << "A[4][2]: " << A[4][2] << "\n";
    FreeMatrixMemory(5, A);

    double r = 3.4;
    double theta = 1.23; */

/*     double *x = new double;
    double *y = new double;
    CalculateRealAndImaginary(r, theta, x, y);
    std::cout << "Real: " << *x << "\n";
    std::cout << "Imaginary: " << *y << "\n";
    delete x, y; */

    // OR 
/*     double x, y;
    CalculateRealAndImaginary(r, theta, &x, &y);
    std::cout << "Real: " << x << "\n";
    std::cout << "Imaginary: " << y << "\n"; */

/*     double A[5]{1.0, 2.0, 3.0, 4.0, 5.0};
    double B[3][3] {{1.0, 1.0, 1.0}, {2.0, 2.0, 2.0}, {3.0, 3.0, 3.0}};

    std::cout << "A[2] " << A[2] << "\n";
    std::cout << "B[1][1] " << B[1][1] << "\n";
    // When we pass an array to a function, essentially we pass the address
    // of the first element. SO ANY CHANGES inside the function would change the array.
    DoSomethingonArray(A, B);
    std::cout << "A[2] " << A[2] << "\n";
    std::cout << "B[1][1] " << B[1][1] << "\n";
 */
/*     double* x = new double(1.0); 
    double K = 12.0; 
    CaculateCubeRoot(x, K);
    std::cout << "x " << *x << "\n";
    delete x;  */

    /* std::cout << "Root x**3=10, with guess 1.0 is " << SolveNewton(cube10, cube10Prime, 1.0) << "\n";
    std::cout << "Root x**3=10, with guess 1.0 is " << SolveNewton(&cube10, &cube10Prime, 1.0) << "\n";
 */
    #ifdef PRINT_JOE
        std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
    #endif

    #ifdef PRINT_BOB
        std::cout << "Bob\n"; // will be excluded since PRINT_BOB is not defined
    #endif
    return 0;
}

double** AllocateMatrixMemory(int numRows, int numCols){
    double** matrix = new double*[numRows];
    for(int i=0; i<numRows; i++){
        matrix[i] = new double[numCols];
    }
    return matrix;
}

void FreeMatrixMemory(int numRows, double** matrix){
    for(int i=0; i<numRows; i++){
        delete[] matrix[i];
    }

    delete[] matrix;
}

void CalculateRealAndImaginary(double r, double theta, double* pReal, double* pImaginary){
    *pReal = r*cos(theta);
    *pImaginary = r*sin(theta);    
}

void DoSomethingonArray(double A[], double B[][3]){
    A[2] = 100.0;
    B[1][1] = 66;   
}

void CaculateCubeRoot(double* x, double K, double tolerance, int maxIterations){
    int iterations = 0; 
    double residual = pow((*x),3) - K;
    while( (fabs(residual) > tolerance) && 
           (iterations < maxIterations)) {
        *x = *x - (pow((*x),3) - K) / (3*pow((*x),2));
        residual = pow((*x),3) - K;
        iterations++;
    }
}


double SolveNewton(
    double (*pFunc) (double),
    double (*pFuncPrime) (double),
    double x)
{
    double step;
    do 
    {
        step = (*pFunc)(x) / (*pFuncPrime)(x);
        x -= step;
    } while (fabs(step) > 1.0e-5);
    return x;
}
/* double SolveNewton(
    double (pFunc) (double),
    double (pFuncPrime) (double),
    double x)
{
    double step;
    do 
    {
        step = (pFunc)(x) / (pFuncPrime)(x);
        x -= step;
    } while (fabs(step) > 1.0e-5);
    return x;
} */


double cube10(double x){
    return x*x*x -10.0;
}
double cube10Prime(double x){
    return 3.0*x*x;
}