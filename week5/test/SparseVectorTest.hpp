#include "../../cxxtest/TestSuite.h"
#include "../src/SparseVector.hpp"

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

        void TestSetGetValue(void){
            SparseVector<int> sV(10);
            sV.setValue(2, 5);
            sV.setValue(6, 3);
            TS_ASSERT_EQUALS(5, sV.getValue(2));
            TS_ASSERT_EQUALS(3, sV.getValue(6));
            TS_ASSERT_EQUALS(0, sV.getValue(0));
            TS_ASSERT_EQUALS(0, sV.getValue(9));
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

};