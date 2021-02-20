#include "pch.h"
#include "CppUnitTest.h"
#include "string.h"
#include "../ConsoleApplication1/ConsoleApplication1.cpp"
#include "../UnitTest1/pch.h"

using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int q = 5;
			int r = Mass("Today was run");
			Assert::IsTrue(q==r);
			
		}
	};
}
