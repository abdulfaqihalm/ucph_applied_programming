#include "../../cxxtest/TestSuite.h"
#include "../src/Matrix.hpp"

class NewMatrixTest: public CxxTest::TestSuite{
    public:
        // TO DO: Adding test cases for Matrices
        void TestGetNumRowAndCol(void){
            int nrow = 2; int ncol = 4;
            Matrix<int> M(nrow, ncol);
            TS_ASSERT(M.GetNumberOfRows()==nrow);
            TS_ASSERT(M.GetNumberOfColumns()==ncol);
        }

        void TestParenthesisOperator(void){
            int nrow = 2; int ncol = 4;
            Matrix<int>M(nrow, ncol);
            for(int i=0; i<nrow; i++){
                for(int j=0; j<ncol; j++){
                    TS_ASSERT_DELTA(M(i,j), 0, 1.0e-16);
                }
            }
        }

        void TestConstParenthesisOperator(void){
            int nrow = 2; int ncol = 4;
            const Matrix<int> M(nrow, ncol);
            for(int i=0; i<nrow; i++){
                for(int j=0; j<ncol; j++){
                    TS_ASSERT_DELTA(M(i,j), 0, 1.0e-16);
                }
            }
        }

        void TestAssignmentOperator(void){
            int nrow = 2; int ncol = 4;
            Matrix<int> M(nrow, ncol);
            Matrix<int> M_prime(nrow, ncol);
            for(int i=0; i<nrow; i++){
                for(int j=0; j<ncol; j++){
                    M_prime(i,j) = 1.0;
                }
            }
            M = M_prime;
            for(int i=0; i<nrow; i++){
                for(int j=0; j<ncol; j++){
                    TS_ASSERT_DELTA(M(i,j), 1, 1.0e-16);
                }
            }

        }

        void TestMinusUnaryOperator(void){
            int nrow = 2; int ncol = 4;
            Matrix<int> M(nrow, ncol);
            Matrix<int> M_prime(nrow, ncol);
            for(int i=0; i<nrow; i++){
                for(int j=0; j<ncol; j++){
                    M(i,j) = 1.0;
                }
            }
            M = -M;
            for(int i=0; i<nrow; i++){
                for(int j=0; j<ncol; j++){
                    TS_ASSERT_DELTA(M(i,j), -1, 1.0e-16);
                }
            }
        }

        void TestBinaryPlusOperator(void){
            int nrow = 2; int ncol = 4;
            Matrix<int> M(nrow, ncol);
            Matrix<int> M_prime(nrow, ncol);
            for(int i=0; i<nrow; i++){
                for(int j=0; j<ncol; j++){
                    M_prime(i,j) = 1.0;
                }
            }
            M = M + M_prime;
            for(int i=0; i<nrow; i++){
                for(int j=0; j<ncol; j++){
                    TS_ASSERT_DELTA(M(i,j), 1, 1.0e-16);
                }
            }
        }

        void TestBinaryMinusOperator(void){
            int nrow = 2; int ncol = 4;
            Matrix<int> M(nrow, ncol);
            Matrix<int> M_prime(nrow, ncol);
            for(int i=0; i<nrow; i++){
                for(int j=0; j<ncol; j++){
                    M_prime(i,j) = 1.0;
                }
            }
            M = M - M_prime;
            for(int i=0; i<nrow; i++){
                for(int j=0; j<ncol; j++){
                    TS_ASSERT_DELTA(M(i,j), -1, 1.0e-16);
                }
            }
        }

        void TestScalarMultiplyOperator(void){
            int nrow = 2; int ncol = 4;
            Matrix<int> M(nrow, ncol);
            for(int i=0; i<nrow; i++){
                for(int j=0; j<ncol; j++){
                    M(i,j) = 1.0;
                }
            }
            M = M*2;
            for(int i=0; i<nrow; i++){
                for(int j=0; j<ncol; j++){
                    TS_ASSERT_DELTA(M(i,j), 2, 1.0e-16);
                }
            }
        }

        void TestMatrixVectorMultiplyOperator(void){
            int nrow = 4; int ncol = 2;
            Matrix<int> M(nrow, ncol);
            for(int i=0; i<nrow; i++){
                for(int j=0; j<ncol; j++){
                    M(i,j) = (2*i)+j+1;
                }
            }
            Vector<int> v(ncol);
            for(int i=0; i<ncol; i++){
                v[i] = 1.0;
            }

            Vector<int> result = M*v;
            TS_ASSERT_DELTA(result[0], 3, 1.0e-16);
            TS_ASSERT_DELTA(result[1], 7, 1.0e-16);
            TS_ASSERT_DELTA(result[2], 11, 1.0e-16);
            TS_ASSERT_DELTA(result[3], 15, 1.0e-16);
        }

        void TestVectorMatrixMultiplyOperator(void){
            int nrow = 4; int ncol = 2;
            Matrix<int> M(nrow, ncol);
            for(int i=0; i<nrow; i++){
                for(int j=0; j<ncol; j++){
                    M(i,j) = (2*i)+j+1;
                }
            }
            Vector<int> v(nrow);
            for(int i=0; i<nrow; i++){
                v[i] = 1.0;
            }

            Vector<int> result = v*M;
            TS_ASSERT_DELTA(result[0], 16, 1.0e-16);
            TS_ASSERT_DELTA(result[1], 20, 1.0e-16);
        }
};