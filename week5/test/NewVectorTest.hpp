#include "../../cxxtest/TestSuite.h"
#include "../src/NewVector.hpp"

class VectorTest: public CxxTest::TestSuite{
    public:
        // TO DO: Adding test cases for vectors
        void TestCustomisedConstructor(void){
            int size = 3;
            Vector<int> v(size);
            for(int i=0; i<size; i++){
                TS_ASSERT_DELTA(0, v[i], 1.0e-16);
            }
        }

        void TestCopyConstructor(void){
            int size = 3; 
            Vector<int> v(size);
            for(int i=0; i<size; i++){
                v[i] = i;
            }

            Vector<int> v_prime(v);

            for(int i=0; i<size; i++){
                TS_ASSERT_DELTA(v[i], v_prime[i], 1.0e-16);
            }
        }

        void TestSize(void){
            int size = 3; 
            Vector<int> v(size);
            TS_ASSERT_EQUALS(v.size(), size);
        }

        void TestBracketOperator(void){
            int size = 3; 
            Vector<int> v(size);
            v[0] = 100.0;
            TS_ASSERT_DELTA(v[0], 100.0, 1.0e-16);
            v[0] = 200.0;
            TS_ASSERT_DELTA(v[0], 200.0, 1.0e-16);
        }

        void TestConstBracketOperator(void){
            const Vector<int> v(3);
            TS_ASSERT_DELTA(v[0], 0.0, 1.0e-16);
        }

        void TestAssignmentOperator(void){
            int size = 3;
            Vector<int> v(size);
            Vector<int> v_prime(size);

            for(int i=0; i<size; i++){
                v[i] = i+1;
            }

            for(int i=0; i<size; i++){
                TS_ASSERT_DIFFERS(v[i], v_prime[i]);
            }

            v_prime = v; 

            for(int i=0; i<size; i++){
                TS_ASSERT_DELTA(v[i], v_prime[i], 1.0e-16);
            }
        }

        void TestMinusUnaryOperator(void){
            int size = 3;
            Vector<int> v(size);

            for(int i=0; i<size; i++){
                v[i] = i+1;
            }
            v = -v;
            for(int i=0; i<size; i++){
                TS_ASSERT_DELTA(v[i], -(i+1), 1.0e-16);
            }
        }

        void TestBinaryPlusOperator(void){
            int size = 3;
            Vector<int> v(size);
            Vector<int> v_prime(size);

            for(int i=0; i<size; i++){
                v[i] = i+1;
                v_prime[i] = i+2;
            }
            
            Vector<int> result = v_prime + v;

            for(int i=0; i<size; i++){
                TS_ASSERT_DELTA(result[i], (2*i)+3, 1.0e-16);
            }
        }

        void TestBinaryMinusOperator(void){
            int size = 3;
            Vector<int> v(size);
            Vector<int> v_prime(size);

            for(int i=0; i<size; i++){
                v[i] = i+1;
                v_prime[i] = i+2;
            }
            
            Vector<int> result = v_prime - v;

            for(int i=0; i<size; i++){
                TS_ASSERT_DELTA(result[i], 1.0, 1.0e-16);
            }
        }

        void TestScalarMultiplyOperator(void){
            int size = 3;
            Vector<int> v(size);

            for(int i=0; i<size; i++){
                v[i] = i+1;
            }

            Vector<int> result = v*2;

            for(int i=0; i<size; i++){
                TS_ASSERT_DELTA(result[i], 2*v[i], 1.0e-16); 
            }
        }

        void TestCalculateNorm(void){
            int size = 3;
            Vector<int> v(size);

            v[0] = 3; v[1] = -4; v[2] = 0; 
            TS_ASSERT_DELTA(v.CalculateNorm(), 5.0, 1.0e-16);
        }
        
};