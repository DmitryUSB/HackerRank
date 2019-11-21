#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Jumping on the Clouds/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Test1)
		{
			std::vector<int> input = { 0, 0, 0, 0, 0, 0, 0 };
			int expect = 3;
			Assert::AreEqual(jumpingOnClouds(input), expect);
		}

		TEST_METHOD(Test2)
		{
			std::vector<int> input = { 0, 0, 0, 0, 0, 0 };
			int expect = 3;
			Assert::AreEqual(jumpingOnClouds(input), expect);
		}

		TEST_METHOD(Test3)
		{
			std::vector<int> input = { 0, 0, 0, 0, 1, 0 };
			int expect = 3;
			Assert::AreEqual(jumpingOnClouds(input), expect);
		}

		TEST_METHOD(Test4)
		{
			std::vector<int> input = { 0, 1, 0, 0, 0, 1, 0 };
			int expect = 3;
			Assert::AreEqual(jumpingOnClouds(input), expect);
		}

		TEST_METHOD(Test5)
		{
			std::vector<int> input = { 0, 0, 1, 0, 0, 1, 0 };
			int expect = 4;
			Assert::AreEqual(jumpingOnClouds(input), expect);
		}

		TEST_METHOD(Test6)
		{
			std::vector<int> input = { 0, 1, 0, 1, 0, 1, 0 };
			int expect = 3;
			Assert::AreEqual(jumpingOnClouds(input), expect);
		}

		TEST_METHOD(Test7)
		{
			std::vector<int> input = { 0, 0, 1, 0, 1, 0, 0 };
			int expect = 4;
			Assert::AreEqual(jumpingOnClouds(input), expect);
		}
	};
}