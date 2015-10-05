#include "stdafx.h"
#include "CppUnitTest.h"
#include "FibonacciCalculator.h"
#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace Classes;
using namespace std;
namespace UnitTests
{		
	TEST_CLASS(FibonnaciCalculatorTest)
	{
	public:
		
		/**
		* Cover constructor and also getter for start and end
		*/
		TEST_METHOD(constructTest)
		{
			FibonacciCalculator Calculator(1, 10);
			Assert::AreEqual(1, Calculator.getStart());
			Assert::AreEqual(10, Calculator.getEnd());
		}

		/**
		* Cover getSequence
		*/
		TEST_METHOD(getSequenceTest)
		{
			//1 to 10 should have a size of 7: 0,1,1,2,3,5,8
			FibonacciCalculator Calculator(0, 10);
			int sequenceSize = Calculator.getSequence().size();
			Assert::IsNotNull(&sequenceSize);
			Assert::AreEqual(sequenceSize, 7);	
		}
	};
}