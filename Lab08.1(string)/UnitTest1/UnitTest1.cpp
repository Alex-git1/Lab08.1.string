#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab08.1(string)/Lab08.1(string).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string testStr2 = "No exclamations here";
			Assert::AreEqual(0, Count(testStr2));
		}
	};
}
