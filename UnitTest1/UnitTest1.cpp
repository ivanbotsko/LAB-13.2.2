#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestTriangleAreaCalculation)
		{
			float sideA = 3;
			float sideB = 4;
			float sideC = 5;

			float s = (sideA + sideB + sideC) / 2.0;
			float expectedArea = sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
			float calculatedArea = CalculateTriangleArea(sideA, sideB, sideC);

			Assert::AreEqual(expectedArea, calculatedArea);
		}

		float CalculateTriangleArea(float a, float b, float c)
		{
			if (a + b > c && a + c > b && b + c > a) {
				float s = (a + b + c) / 2.0;
				return sqrt(s * (s - a) * (s - b) * (s - c));
			}
			else {
				return -1; 
			}
		}
	};
}
