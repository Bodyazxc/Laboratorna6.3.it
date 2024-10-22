#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna6.3.it/Laboratorna6.3.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63it
{
	TEST_CLASS(UnitTest63it)
	{
	public:
		
		TEST_METHOD(TestFindMaxEven)
		{
			const int n = 4;
			int arr[n] = { 5, 6, 7, 8 };
			int maxEvenResult;
			Assert::AreEqual(-858993460, maxEvenResult);

		}
	};
}
