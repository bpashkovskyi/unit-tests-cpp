#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP/AvgOperation.h"
#include "../OOP/AvgOperation.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AvgOperationTests
{
	TEST_CLASS(AvgOperationTests)
	{
	public:
		
		TEST_METHOD(Invoke_ShouldReturnAvgElement)
		{
			double array[] = { 1, 2, 3, 4, 5 };

			AvgOperation avgOperation;
			double avgElement = avgOperation.Invoke(array, 5);

			Assert::AreEqual(3.0, avgElement);
		}

		TEST_METHOD(Invoke_ShouldReturnAvgElement_IfAllElementsAreEqual)
		{
			double array[] = { 1, 1, 1, 1, 1 };

			AvgOperation avgOperation;
			double avgElement = avgOperation.Invoke(array, 5);

			Assert::AreEqual(1.0, avgElement);
		}

		TEST_METHOD(Invoke_ShouldReturnAvgElement_IfAllElementsAreOrderedInDescendingOrder)
		{
			double array[] = { 5, 4, 3, 2, 1 };

			AvgOperation avgOperation;
			double avgElement = avgOperation.Invoke(array, 5);

			Assert::AreEqual(3.0, avgElement);
		}
	};
}
