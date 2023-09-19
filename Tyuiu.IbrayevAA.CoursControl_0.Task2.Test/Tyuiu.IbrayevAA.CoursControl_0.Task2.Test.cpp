#include "pch.h"
#include "CppUnitTest.h"
#include "..//Tyuiu.IbrayevAA.CoursControl_0.Task2.Lib/Tyuiu.IbrayevAA.CoursControl_0.Task2.Lib.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			ISprint0Task8V2* add = new Service();
			int a{};
			int b{};
			int c{};
			int v{};



			v = add->Rezultat(a, b, c);
			Assert::AreEqual(v, v);
		}
	};
}
