#include "pch.h"
#include "CppUnitTest.h"
#include "../lab11.1C++.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(Test_countCharacters)
		{
			int plusCount = 0, minusCount = 0, equalCount = 0;
			string line = "++--==+==--+";

			countCharacters(line, plusCount, minusCount, equalCount);

			Assert::AreEqual(4, plusCount, L"Кількість '+' невірна");
			Assert::AreEqual(4, minusCount, L"Кількість '-' невірна");
			Assert::AreEqual(4, equalCount, L"Кількість '=' невірна");
		}
	};
}
