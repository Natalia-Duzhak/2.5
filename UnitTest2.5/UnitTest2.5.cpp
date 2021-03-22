#include "pch.h"
#include "CppUnitTest.h"
#include "../Project2.5/Triangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest25
{
	TEST_CLASS(UnitTest25)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triangle a(0, 0, 0);
			bool k = a.A();
			Assert::AreEqual(k, true);
		}
	};
}
