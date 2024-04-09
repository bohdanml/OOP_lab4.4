#include "pch.h"
#include "CppUnitTest.h"
#include "..//OOP_lab4.4/main.cpp"
#include "..//OOP_lab4.4/Complex.cpp"
#include "..//OOP_lab4.4/Vector3D.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
				Complex c(5, 12);
				Assert::AreEqual(13.0, c.calculateMagnitude(), L"Failure in complex magnitude test", LINE_INFO());
			
		}
	};
}
