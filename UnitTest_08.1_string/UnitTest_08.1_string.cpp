#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_08.1_string/lab_08.1_string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest081string
{
	TEST_CLASS(UnitTest081string)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::string test = "while or not while? hmm...";
			Assert::AreEqual(2,Count(test));
		}
	};
}
