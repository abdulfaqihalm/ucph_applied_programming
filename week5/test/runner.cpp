/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_VectorTest_init = false;
#include "/Users/faqih/Documents/UCPH/Applied Programming/week5/test/VectorTest.hpp"

static VectorTest suite_VectorTest;

static CxxTest::List Tests_VectorTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_VectorTest( "test/VectorTest.hpp", 5, "VectorTest", suite_VectorTest, Tests_VectorTest );

static class TestDescription_suite_VectorTest_TestCustomisedConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VectorTest_TestCustomisedConstructor() : CxxTest::RealTestDescription( Tests_VectorTest, suiteDescription_VectorTest, 8, "TestCustomisedConstructor" ) {}
 void runTest() { suite_VectorTest.TestCustomisedConstructor(); }
} testDescription_suite_VectorTest_TestCustomisedConstructor;

static class TestDescription_suite_VectorTest_TestCustomisedComplexNumModConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VectorTest_TestCustomisedComplexNumModConstructor() : CxxTest::RealTestDescription( Tests_VectorTest, suiteDescription_VectorTest, 17, "TestCustomisedComplexNumModConstructor" ) {}
 void runTest() { suite_VectorTest.TestCustomisedComplexNumModConstructor(); }
} testDescription_suite_VectorTest_TestCustomisedComplexNumModConstructor;

static class TestDescription_suite_VectorTest_TestCopyConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VectorTest_TestCopyConstructor() : CxxTest::RealTestDescription( Tests_VectorTest, suiteDescription_VectorTest, 25, "TestCopyConstructor" ) {}
 void runTest() { suite_VectorTest.TestCopyConstructor(); }
} testDescription_suite_VectorTest_TestCopyConstructor;

static class TestDescription_suite_VectorTest_TestSize : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VectorTest_TestSize() : CxxTest::RealTestDescription( Tests_VectorTest, suiteDescription_VectorTest, 39, "TestSize" ) {}
 void runTest() { suite_VectorTest.TestSize(); }
} testDescription_suite_VectorTest_TestSize;

static class TestDescription_suite_VectorTest_TestBracketOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VectorTest_TestBracketOperator() : CxxTest::RealTestDescription( Tests_VectorTest, suiteDescription_VectorTest, 45, "TestBracketOperator" ) {}
 void runTest() { suite_VectorTest.TestBracketOperator(); }
} testDescription_suite_VectorTest_TestBracketOperator;

static class TestDescription_suite_VectorTest_TestConstBracketOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VectorTest_TestConstBracketOperator() : CxxTest::RealTestDescription( Tests_VectorTest, suiteDescription_VectorTest, 54, "TestConstBracketOperator" ) {}
 void runTest() { suite_VectorTest.TestConstBracketOperator(); }
} testDescription_suite_VectorTest_TestConstBracketOperator;

static class TestDescription_suite_VectorTest_TestAssignmentOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VectorTest_TestAssignmentOperator() : CxxTest::RealTestDescription( Tests_VectorTest, suiteDescription_VectorTest, 59, "TestAssignmentOperator" ) {}
 void runTest() { suite_VectorTest.TestAssignmentOperator(); }
} testDescription_suite_VectorTest_TestAssignmentOperator;

static class TestDescription_suite_VectorTest_TestMinusUnaryOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VectorTest_TestMinusUnaryOperator() : CxxTest::RealTestDescription( Tests_VectorTest, suiteDescription_VectorTest, 79, "TestMinusUnaryOperator" ) {}
 void runTest() { suite_VectorTest.TestMinusUnaryOperator(); }
} testDescription_suite_VectorTest_TestMinusUnaryOperator;

static class TestDescription_suite_VectorTest_TestBinaryPlusOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VectorTest_TestBinaryPlusOperator() : CxxTest::RealTestDescription( Tests_VectorTest, suiteDescription_VectorTest, 92, "TestBinaryPlusOperator" ) {}
 void runTest() { suite_VectorTest.TestBinaryPlusOperator(); }
} testDescription_suite_VectorTest_TestBinaryPlusOperator;

static class TestDescription_suite_VectorTest_TestBinaryMinusOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VectorTest_TestBinaryMinusOperator() : CxxTest::RealTestDescription( Tests_VectorTest, suiteDescription_VectorTest, 109, "TestBinaryMinusOperator" ) {}
 void runTest() { suite_VectorTest.TestBinaryMinusOperator(); }
} testDescription_suite_VectorTest_TestBinaryMinusOperator;

static class TestDescription_suite_VectorTest_TestScalarMultiplyOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VectorTest_TestScalarMultiplyOperator() : CxxTest::RealTestDescription( Tests_VectorTest, suiteDescription_VectorTest, 126, "TestScalarMultiplyOperator" ) {}
 void runTest() { suite_VectorTest.TestScalarMultiplyOperator(); }
} testDescription_suite_VectorTest_TestScalarMultiplyOperator;

static class TestDescription_suite_VectorTest_TestCalculateNorm : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VectorTest_TestCalculateNorm() : CxxTest::RealTestDescription( Tests_VectorTest, suiteDescription_VectorTest, 141, "TestCalculateNorm" ) {}
 void runTest() { suite_VectorTest.TestCalculateNorm(); }
} testDescription_suite_VectorTest_TestCalculateNorm;

#include "/Users/faqih/Documents/UCPH/Applied Programming/week5/test/MatrixTest.hpp"

static NewMatrixTest suite_NewMatrixTest;

static CxxTest::List Tests_NewMatrixTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_NewMatrixTest( "test/MatrixTest.hpp", 4, "NewMatrixTest", suite_NewMatrixTest, Tests_NewMatrixTest );

static class TestDescription_suite_NewMatrixTest_TestGetNumRowAndCol : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NewMatrixTest_TestGetNumRowAndCol() : CxxTest::RealTestDescription( Tests_NewMatrixTest, suiteDescription_NewMatrixTest, 7, "TestGetNumRowAndCol" ) {}
 void runTest() { suite_NewMatrixTest.TestGetNumRowAndCol(); }
} testDescription_suite_NewMatrixTest_TestGetNumRowAndCol;

static class TestDescription_suite_NewMatrixTest_TestParenthesisOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NewMatrixTest_TestParenthesisOperator() : CxxTest::RealTestDescription( Tests_NewMatrixTest, suiteDescription_NewMatrixTest, 14, "TestParenthesisOperator" ) {}
 void runTest() { suite_NewMatrixTest.TestParenthesisOperator(); }
} testDescription_suite_NewMatrixTest_TestParenthesisOperator;

static class TestDescription_suite_NewMatrixTest_TestConstParenthesisOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NewMatrixTest_TestConstParenthesisOperator() : CxxTest::RealTestDescription( Tests_NewMatrixTest, suiteDescription_NewMatrixTest, 24, "TestConstParenthesisOperator" ) {}
 void runTest() { suite_NewMatrixTest.TestConstParenthesisOperator(); }
} testDescription_suite_NewMatrixTest_TestConstParenthesisOperator;

static class TestDescription_suite_NewMatrixTest_TestAssignmentOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NewMatrixTest_TestAssignmentOperator() : CxxTest::RealTestDescription( Tests_NewMatrixTest, suiteDescription_NewMatrixTest, 34, "TestAssignmentOperator" ) {}
 void runTest() { suite_NewMatrixTest.TestAssignmentOperator(); }
} testDescription_suite_NewMatrixTest_TestAssignmentOperator;

static class TestDescription_suite_NewMatrixTest_TestMinusUnaryOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NewMatrixTest_TestMinusUnaryOperator() : CxxTest::RealTestDescription( Tests_NewMatrixTest, suiteDescription_NewMatrixTest, 52, "TestMinusUnaryOperator" ) {}
 void runTest() { suite_NewMatrixTest.TestMinusUnaryOperator(); }
} testDescription_suite_NewMatrixTest_TestMinusUnaryOperator;

static class TestDescription_suite_NewMatrixTest_TestBinaryPlusOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NewMatrixTest_TestBinaryPlusOperator() : CxxTest::RealTestDescription( Tests_NewMatrixTest, suiteDescription_NewMatrixTest, 69, "TestBinaryPlusOperator" ) {}
 void runTest() { suite_NewMatrixTest.TestBinaryPlusOperator(); }
} testDescription_suite_NewMatrixTest_TestBinaryPlusOperator;

static class TestDescription_suite_NewMatrixTest_TestBinaryMinusOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NewMatrixTest_TestBinaryMinusOperator() : CxxTest::RealTestDescription( Tests_NewMatrixTest, suiteDescription_NewMatrixTest, 86, "TestBinaryMinusOperator" ) {}
 void runTest() { suite_NewMatrixTest.TestBinaryMinusOperator(); }
} testDescription_suite_NewMatrixTest_TestBinaryMinusOperator;

static class TestDescription_suite_NewMatrixTest_TestScalarMultiplyOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NewMatrixTest_TestScalarMultiplyOperator() : CxxTest::RealTestDescription( Tests_NewMatrixTest, suiteDescription_NewMatrixTest, 103, "TestScalarMultiplyOperator" ) {}
 void runTest() { suite_NewMatrixTest.TestScalarMultiplyOperator(); }
} testDescription_suite_NewMatrixTest_TestScalarMultiplyOperator;

static class TestDescription_suite_NewMatrixTest_TestMatrixVectorMultiplyOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NewMatrixTest_TestMatrixVectorMultiplyOperator() : CxxTest::RealTestDescription( Tests_NewMatrixTest, suiteDescription_NewMatrixTest, 119, "TestMatrixVectorMultiplyOperator" ) {}
 void runTest() { suite_NewMatrixTest.TestMatrixVectorMultiplyOperator(); }
} testDescription_suite_NewMatrixTest_TestMatrixVectorMultiplyOperator;

static class TestDescription_suite_NewMatrixTest_TestVectorMatrixMultiplyOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NewMatrixTest_TestVectorMatrixMultiplyOperator() : CxxTest::RealTestDescription( Tests_NewMatrixTest, suiteDescription_NewMatrixTest, 139, "TestVectorMatrixMultiplyOperator" ) {}
 void runTest() { suite_NewMatrixTest.TestVectorMatrixMultiplyOperator(); }
} testDescription_suite_NewMatrixTest_TestVectorMatrixMultiplyOperator;

#include "/Users/faqih/Documents/UCPH/Applied Programming/week5/test/SparseVectorTest.hpp"

static SparseVectorTest suite_SparseVectorTest;

static CxxTest::List Tests_SparseVectorTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SparseVectorTest( "test/SparseVectorTest.hpp", 5, "SparseVectorTest", suite_SparseVectorTest, Tests_SparseVectorTest );

static class TestDescription_suite_SparseVectorTest_TestConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SparseVectorTest_TestConstructor() : CxxTest::RealTestDescription( Tests_SparseVectorTest, suiteDescription_SparseVectorTest, 7, "TestConstructor" ) {}
 void runTest() { suite_SparseVectorTest.TestConstructor(); }
} testDescription_suite_SparseVectorTest_TestConstructor;

static class TestDescription_suite_SparseVectorTest_TestCustomConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SparseVectorTest_TestCustomConstructor() : CxxTest::RealTestDescription( Tests_SparseVectorTest, suiteDescription_SparseVectorTest, 14, "TestCustomConstructor" ) {}
 void runTest() { suite_SparseVectorTest.TestCustomConstructor(); }
} testDescription_suite_SparseVectorTest_TestCustomConstructor;

static class TestDescription_suite_SparseVectorTest_TestAssignment : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SparseVectorTest_TestAssignment() : CxxTest::RealTestDescription( Tests_SparseVectorTest, suiteDescription_SparseVectorTest, 30, "TestAssignment" ) {}
 void runTest() { suite_SparseVectorTest.TestAssignment(); }
} testDescription_suite_SparseVectorTest_TestAssignment;

static class TestDescription_suite_SparseVectorTest_TestSizeAndNonZeroes : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SparseVectorTest_TestSizeAndNonZeroes() : CxxTest::RealTestDescription( Tests_SparseVectorTest, suiteDescription_SparseVectorTest, 41, "TestSizeAndNonZeroes" ) {}
 void runTest() { suite_SparseVectorTest.TestSizeAndNonZeroes(); }
} testDescription_suite_SparseVectorTest_TestSizeAndNonZeroes;

static class TestDescription_suite_SparseVectorTest_TestIndexNonZero : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SparseVectorTest_TestIndexNonZero() : CxxTest::RealTestDescription( Tests_SparseVectorTest, suiteDescription_SparseVectorTest, 49, "TestIndexNonZero" ) {}
 void runTest() { suite_SparseVectorTest.TestIndexNonZero(); }
} testDescription_suite_SparseVectorTest_TestIndexNonZero;

static class TestDescription_suite_SparseVectorTest_TestValueNonZero : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SparseVectorTest_TestValueNonZero() : CxxTest::RealTestDescription( Tests_SparseVectorTest, suiteDescription_SparseVectorTest, 57, "TestValueNonZero" ) {}
 void runTest() { suite_SparseVectorTest.TestValueNonZero(); }
} testDescription_suite_SparseVectorTest_TestValueNonZero;

static class TestDescription_suite_SparseVectorTest_TestSetGetValue : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SparseVectorTest_TestSetGetValue() : CxxTest::RealTestDescription( Tests_SparseVectorTest, suiteDescription_SparseVectorTest, 65, "TestSetGetValue" ) {}
 void runTest() { suite_SparseVectorTest.TestSetGetValue(); }
} testDescription_suite_SparseVectorTest_TestSetGetValue;

static class TestDescription_suite_SparseVectorTest_TestAdditionAssignmentOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SparseVectorTest_TestAdditionAssignmentOperator() : CxxTest::RealTestDescription( Tests_SparseVectorTest, suiteDescription_SparseVectorTest, 80, "TestAdditionAssignmentOperator" ) {}
 void runTest() { suite_SparseVectorTest.TestAdditionAssignmentOperator(); }
} testDescription_suite_SparseVectorTest_TestAdditionAssignmentOperator;

static class TestDescription_suite_SparseVectorTest_TestSubtractAssignmentOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SparseVectorTest_TestSubtractAssignmentOperator() : CxxTest::RealTestDescription( Tests_SparseVectorTest, suiteDescription_SparseVectorTest, 96, "TestSubtractAssignmentOperator" ) {}
 void runTest() { suite_SparseVectorTest.TestSubtractAssignmentOperator(); }
} testDescription_suite_SparseVectorTest_TestSubtractAssignmentOperator;

static class TestDescription_suite_SparseVectorTest_TestAdditionTwoSparseVector : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SparseVectorTest_TestAdditionTwoSparseVector() : CxxTest::RealTestDescription( Tests_SparseVectorTest, suiteDescription_SparseVectorTest, 112, "TestAdditionTwoSparseVector" ) {}
 void runTest() { suite_SparseVectorTest.TestAdditionTwoSparseVector(); }
} testDescription_suite_SparseVectorTest_TestAdditionTwoSparseVector;

static class TestDescription_suite_SparseVectorTest_TestSubtractionTwoSparseVector : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SparseVectorTest_TestSubtractionTwoSparseVector() : CxxTest::RealTestDescription( Tests_SparseVectorTest, suiteDescription_SparseVectorTest, 128, "TestSubtractionTwoSparseVector" ) {}
 void runTest() { suite_SparseVectorTest.TestSubtractionTwoSparseVector(); }
} testDescription_suite_SparseVectorTest_TestSubtractionTwoSparseVector;

static class TestDescription_suite_SparseVectorTest_TestMatrixSparseVectMultiply : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SparseVectorTest_TestMatrixSparseVectMultiply() : CxxTest::RealTestDescription( Tests_SparseVectorTest, suiteDescription_SparseVectorTest, 144, "TestMatrixSparseVectMultiply" ) {}
 void runTest() { suite_SparseVectorTest.TestMatrixSparseVectMultiply(); }
} testDescription_suite_SparseVectorTest_TestMatrixSparseVectMultiply;

static class TestDescription_suite_SparseVectorTest_TestSparseVectMatrixMultiply : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SparseVectorTest_TestSparseVectMatrixMultiply() : CxxTest::RealTestDescription( Tests_SparseVectorTest, suiteDescription_SparseVectorTest, 170, "TestSparseVectMatrixMultiply" ) {}
 void runTest() { suite_SparseVectorTest.TestSparseVectMatrixMultiply(); }
} testDescription_suite_SparseVectorTest_TestSparseVectMatrixMultiply;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
