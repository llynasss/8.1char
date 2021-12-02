#include "pch.h"
#include "CppUnitTest.h"
#include "../8.3char/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ut81char
{
	TEST_CLASS(ut81char)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char p[] = "nobel";
			bool u = isTrue(p);
			Assert::AreEqual(true, u);
		}
	};
}
