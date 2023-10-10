#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP/MinOperation.h"
#include "../OOP/MinOperation.cpp"
#include <stdexcept>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MinOperationTests
{
	TEST_CLASS(MinOperationTests)
	{
	public:
		
		TEST_METHOD(Invoke_ShouldReturnMinElement)
		{
			double array[] = { 1, 2, 3, 4, 5 };

			MinOperation minOperation;
			double minElement = minOperation.Invoke(array, 5);

			Assert::AreEqual(1.0, minElement);
		}

		TEST_METHOD(Invoke_ShouldReturnMinElement_IfAllElementsAreEqual)
		{
			double array[] = { 1, 1, 1, 1, 1 };

			MinOperation minOperation;
			double minElement = minOperation.Invoke(array, 5);

			Assert::AreEqual(1.0, minElement);
		}

		TEST_METHOD(Invoke_ShouldReturnMinElement_IfAllElementsAreOrderedInDescendingOrder)
		{
			double array[] = { 5, 4, 3, 2, 1 };

			MinOperation minOperation;
			double minElement = minOperation.Invoke(array, 5);

			Assert::AreEqual(1.0, minElement);
		}

		TEST_METHOD(Invoke_ShouldThrowException_IfArrayIsEmpty)
		{
			auto func = [] { 

				double array[] = { 1 };

				MinOperation minOperation;
				minOperation.Invoke(array, 0); 
			};

			Assert::ExpectException<std::invalid_argument>(func);
		}
	};
}
