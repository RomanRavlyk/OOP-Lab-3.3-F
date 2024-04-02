#include "pch.h"
#include "CppUnitTest.h"
#include "..//OOP Lab 3.3 F/Calculator.h"
#include "..//OOP Lab 3.3 F/Calculator.h"
#include "..//OOP Lab 3.3 F/Calculator1.h"
#include "..//OOP Lab 3.3 F/Calculator1.cpp"
#include "..//OOP Lab 3.3 F/Fraction.h"
#include "..//OOP Lab 3.3 F/Fraction.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction fraction(2, 3);
			long x = 2;
			Assert::AreEqual(x, fraction.getNumerator());
		}
	};
}
