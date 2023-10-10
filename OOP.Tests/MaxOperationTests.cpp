#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP/MaxOperation.h"
#include "../OOP/MaxOperation.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MaxOperationTests
{
	TEST_CLASS(MaxOperationTests)
	{
	public:
		
		TEST_METHOD(Invoke_ShouldReturnMaxElement)
		{
			double array[] = { 1, 2, 3, 4, 5 };

			MaxOperation maxOperation;
			double maxElement = maxOperation.Invoke(array, 5);

			Assert::AreEqual(5.0, maxElement);
		}

		TEST_METHOD(Invoke_ShouldReturnMaxElement_IfAllElementsAreEqual)
		{
			double array[] = { 1, 1, 1, 1, 1 };

			MaxOperation maxOperation;
			double maxElement = maxOperation.Invoke(array, 5);

			Assert::AreEqual(1.0, maxElement);
		}

		TEST_METHOD(Invoke_ShouldReturnMaxElement_IfAllElementsAreOrderedInDescendingOrder)
		{
			double array[] = { 5, 4, 3, 2, 1 };

			MaxOperation maxOperation;
			double maxElement = maxOperation.Invoke(array, 5);

			Assert::AreEqual(5.0, maxElement);
		}
	};
}
