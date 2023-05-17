#include "../../cxxtest/TestSuite.h"
#include "../src/SparseVector.hpp"
#include "../src/Vector.hpp"

class SparseVectorTest: public CxxTest::TestSuite{
    public:
        void TestConstructor(void){
            SparseVector<int> sV;
            TS_ASSERT_EQUALS(0.0, sV.size());
            TS_ASSERT_EQUALS(0.0, sV.nonZeroes());
            TS_ASSERT_EQUALS(0.0, sV.size());
        } 

        void TestCustomConstructor(void){
            SparseVector<int> sV(10);
            for(int i=0; i<10; i++){
                TS_ASSERT_DELTA(0.0, sV.getValue(i), 1.0e-16) ;
            }
            TS_ASSERT_EQUALS(10, sV.size());
            TS_ASSERT_EQUALS(0, sV.nonZeroes());

            SparseVector<ComplexNumber> sV_prime(4);
            for(int i=0; i<4; i++){
                TS_ASSERT_DELTA(0.0, sV_prime.getValue(i).CalculateModulus(), 1.0e-16) ;
            }
            TS_ASSERT_EQUALS(4, sV_prime.size());
            TS_ASSERT_EQUALS(0, sV_prime.nonZeroes());
        }

        void TestAssignment(void){
            SparseVector<int> sV(10);
            SparseVector<int> sV_prime(10);
            sV_prime.setValue(2, 5);
            sV_prime.setValue(6, 3);
            TS_ASSERT_DIFFERS(sV.nonZeroes(), sV_prime.nonZeroes());
            sV = sV_prime; 
            TS_ASSERT_EQUALS(sV.nonZeroes(), sV_prime.nonZeroes());
            TS_ASSERT_EQUALS(sV.getValue(2), sV_prime.getValue(2));
        } 

        void TestSizeAndNonZeroes(void){
            SparseVector<int> sV(10);
            sV.setValue(2, 5);
            sV.setValue(6, 3);
            TS_ASSERT_EQUALS(10, sV.size());
            TS_ASSERT_EQUALS(2, sV.nonZeroes());
        }

        void TestIndexNonZero(void){
            SparseVector<int> sV(10);
            sV.setValue(2, 5);
            sV.setValue(6, 3);
            TS_ASSERT_EQUALS(2, sV.indexNonZero(0))
            TS_ASSERT_EQUALS(6, sV.indexNonZero(1))
        }

        void TestValueNonZero(void){
            SparseVector<int> sV(10);
            sV.setValue(2, 5);
            sV.setValue(6, 3);
            TS_ASSERT_EQUALS(5, sV.valueNonZero(0))
            TS_ASSERT_EQUALS(3, sV.valueNonZero(1))
        }

        void TestSetGetValue(void){
            SparseVector<int> sV(10);
            sV.setValue(3, 5);
            sV.setValue(6, 3);
            TS_ASSERT_EQUALS(5, sV.getValue(3));
            TS_ASSERT_EQUALS(3, sV.getValue(6));
            TS_ASSERT_EQUALS(0, sV.getValue(9));
            sV.setValue(3, 3);
            TS_ASSERT_EQUALS(3, sV.getValue(3));
            TS_ASSERT_EQUALS(2, sV.nonZeroes());
            sV.setValue(5, 1);
            TS_ASSERT_EQUALS(1, sV.getValue(5));
            TS_ASSERT_EQUALS(3, sV.nonZeroes());
        }

        void TestAdditionAssignmentOperator(void){
            SparseVector<int> sV(10);
            sV.setValue(3, 5);
            sV.setValue(5, -8);
            sV.setValue(6, 3);
            SparseVector<int> sV_prime(10);
            sV_prime.setValue(3, 2);
            sV_prime.setValue(5, 9);
            sV_prime.setValue(6, 3);
            sV += sV_prime;
            TS_ASSERT_EQUALS(7, sV.getValue(3));
            TS_ASSERT_EQUALS(1, sV.getValue(5));
            TS_ASSERT_EQUALS(6, sV.getValue(6));
            TS_ASSERT_EQUALS(0, sV.getValue(9));
        }

        void TestSubtractAssignmentOperator(void){
            SparseVector<int> sV(10);
            sV.setValue(3, 5);
            sV.setValue(5, 8);
            sV.setValue(6, 3);
            SparseVector<int> sV_prime(10);
            sV_prime.setValue(3, 2);
            sV_prime.setValue(5, 10);
            sV_prime.setValue(6, 3);
            sV -= sV_prime;
            TS_ASSERT_EQUALS(3, sV.getValue(3));
            TS_ASSERT_EQUALS(-2, sV.getValue(5));
            TS_ASSERT_EQUALS(0, sV.getValue(6));
            TS_ASSERT_EQUALS(0, sV.getValue(9));
        }

        void TestAdditionTwoSparseVector(void){
            SparseVector<int> sV(10);
            sV.setValue(3, 5);
            sV.setValue(5, 8);
            sV.setValue(6, 3);
            SparseVector<int> sV_prime(10);
            sV_prime.setValue(3, 2);
            sV_prime.setValue(5, 10);
            sV_prime.setValue(6, 3);
            SparseVector<int> result = sV + sV_prime;
            TS_ASSERT_EQUALS(7, result.getValue(3));
            TS_ASSERT_EQUALS(18, result.getValue(5));
            TS_ASSERT_EQUALS(6, result.getValue(6));
            TS_ASSERT_EQUALS(0, result.getValue(9));
        }

        void TestSubtractionTwoSparseVector(void){
            SparseVector<int> sV(10);
            sV.setValue(3, 5);
            sV.setValue(5, 8);
            sV.setValue(6, 3);
            SparseVector<int> sV_prime(10);
            sV_prime.setValue(3, 2);
            sV_prime.setValue(5, 10);
            sV_prime.setValue(6, 3);
            SparseVector<int> result = sV - sV_prime;
            TS_ASSERT_EQUALS(3, result.getValue(3));
            TS_ASSERT_EQUALS(-2, result.getValue(5));
            TS_ASSERT_EQUALS(0, result.getValue(6));
            TS_ASSERT_EQUALS(0, result.getValue(9));
        }

        void TestMatrixSparseVectMultiply(void){
            int nrow = 2;
            int ncol = 4;
            SparseVector<int> V(ncol);
            V.setValue(1, 1);
            V.setValue(3, 2);
            Matrix<int> M(nrow, ncol);
            for(int i=0; i<nrow; i++){
                for(int j=0; j<ncol; j++){
                    M(i,j) = (i*ncol) + (j+1);
                }
            }

            Vector<int> result = M*V;
            TS_ASSERT_EQUALS(10, result[0]);
            TS_ASSERT_EQUALS(22, result[1]);
            TS_ASSERT_EQUALS(nrow, result.size());

            SparseVector<int> V_prime(ncol);

            result = M*V_prime;
            TS_ASSERT_EQUALS(0, result[0]);
            TS_ASSERT_EQUALS(0, result[1]);
            TS_ASSERT_EQUALS(nrow, result.size());
        }

        void TestSparseVectMatrixMultiply(void){
            SparseVector<int> V(4);
            V.setValue(1, 1);
            V.setValue(3, 2);

            int nrow = 4;
            int ncol = 2;
            Matrix<int> M(nrow, ncol);
            for(int i=0; i<nrow; i++){
                for(int j=0; j<ncol; j++){
                    M(i,j) = (i*ncol) + (j+1);
                }
            }

            Vector<int> result = V*M;
            TS_ASSERT_EQUALS(17, result[0]);
            TS_ASSERT_EQUALS(20, result[1]);
            TS_ASSERT_EQUALS(ncol, result.size());
        }
};