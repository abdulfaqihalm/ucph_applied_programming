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
#include "/Users/faqih/Documents/UCPH/Applied Programming/week5/test/NewVectorTest.hpp"

static VectorTest suite_VectorTest;

static CxxTest::List Tests_VectorTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_VectorTest( "test/NewVectorTest.hpp", 4, "VectorTest", suite_VectorTest, Tests_VectorTest );

static class TestDescription_suite_VectorTest_TestCustomisedConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VectorTest_TestCustomisedConstructor() : CxxTest::RealTestDescription( Tests_VectorTest, suiteDescription_VectorTest, 7, "TestCustomisedConstructor" ) {}
 void runTest() { suite_VectorTest.TestCustomisedConstructor(); }
} testDescription_suite_VectorTest_TestCustomisedConstructor;

static class TestDescription_suite_VectorTest_TestCopyConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VectorTest_TestCopyConstructor() : CxxTest::RealTestDescription( Tests_VectorTest, suiteDescription_VectorTest, 15, "TestCopyConstructor" ) {}
 void runTest() { suite_VectorTest.TestCopyConstructor(); }
} testDescription_suite_VectorTest_TestCopyConstructor;

static class TestDescription_suite_VectorTest_TestSize : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VectorTest_TestSize() : CxxTest::RealTestDescription( Tests_VectorTest, suiteDescription_VectorTest, 29, "TestSize" ) {}
 void runTest() { suite_VectorTest.TestSize(); }
} testDescription_suite_VectorTest_TestSize;

static class TestDescription_suite_VectorTest_TestBracketOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VectorTest_TestBracketOperator() : CxxTest::RealTestDescription( Tests_VectorTest, suiteDescription_VectorTest, 35, "TestBracketOperator" ) {}
 void runTest() { suite_VectorTest.TestBracketOperator(); }
} testDescription_suite_VectorTest_TestBracketOperator;

static class TestDescription_suite_VectorTest_TestConstBracketOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VectorTest_TestConstBracketOperator() : CxxTest::RealTestDescription( Tests_VectorTest, suiteDescription_VectorTest, 44, "TestConstBracketOperator" ) {}
 void runTest() { suite_VectorTest.TestConstBracketOperator(); }
} testDescription_suite_VectorTest_TestConstBracketOperator;

static class TestDescription_suite_VectorTest_TestAssignmentOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VectorTest_TestAssignmentOperator() : CxxTest::RealTestDescription( Tests_VectorTest, suiteDescription_VectorTest, 49, "TestAssignmentOperator" ) {}
 void runTest() { suite_VectorTest.TestAssignmentOperator(); }
} testDescription_suite_VectorTest_TestAssignmentOperator;

static class TestDescription_suite_VectorTest_TestMinusUnaryOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VectorTest_TestMinusUnaryOperator() : CxxTest::RealTestDescription( Tests_VectorTest, suiteDescription_VectorTest, 69, "TestMinusUnaryOperator" ) {}
 void runTest() { suite_VectorTest.TestMinusUnaryOperator(); }
} testDescription_suite_VectorTest_TestMinusUnaryOperator;

static class TestDescription_suite_VectorTest_TestBinaryPlusOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VectorTest_TestBinaryPlusOperator() : CxxTest::RealTestDescription( Tests_VectorTest, suiteDescription_VectorTest, 82, "TestBinaryPlusOperator" ) {}
 void runTest() { suite_VectorTest.TestBinaryPlusOperator(); }
} testDescription_suite_VectorTest_TestBinaryPlusOperator;

static class TestDescription_suite_VectorTest_TestBinaryMinusOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VectorTest_TestBinaryMinusOperator() : CxxTest::RealTestDescription( Tests_VectorTest, suiteDescription_VectorTest, 99, "TestBinaryMinusOperator" ) {}
 void runTest() { suite_VectorTest.TestBinaryMinusOperator(); }
} testDescription_suite_VectorTest_TestBinaryMinusOperator;

static class TestDescription_suite_VectorTest_TestScalarMultiplyOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VectorTest_TestScalarMultiplyOperator() : CxxTest::RealTestDescription( Tests_VectorTest, suiteDescription_VectorTest, 116, "TestScalarMultiplyOperator" ) {}
 void runTest() { suite_VectorTest.TestScalarMultiplyOperator(); }
} testDescription_suite_VectorTest_TestScalarMultiplyOperator;

static class TestDescription_suite_VectorTest_TestCalculateNorm : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_VectorTest_TestCalculateNorm() : CxxTest::RealTestDescription( Tests_VectorTest, suiteDescription_VectorTest, 131, "TestCalculateNorm" ) {}
 void runTest() { suite_VectorTest.TestCalculateNorm(); }
} testDescription_suite_VectorTest_TestCalculateNorm;

#include "/Users/faqih/Documents/UCPH/Applied Programming/week5/test/NewMatrixTest.hpp"

static NewMatrixTest suite_NewMatrixTest;

static CxxTest::List Tests_NewMatrixTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_NewMatrixTest( "test/NewMatrixTest.hpp", 4, "NewMatrixTest", suite_NewMatrixTest, Tests_NewMatrixTest );

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

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
