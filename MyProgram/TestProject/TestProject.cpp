#include "pch.h"
#include "CppUnitTest.h"
#include "../MyProgram/Math.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestProject
{
	TEST_CLASS(TestProject)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Math math;
			Assert::AreEqual(10, math.add(6, 4));
		}
	};
}
