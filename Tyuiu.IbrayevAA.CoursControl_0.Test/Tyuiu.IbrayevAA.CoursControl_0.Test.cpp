#include "pch.h"
#include "CppUnitTest.h"
#include "..//Tyuiu.IbrayevAA.CoursControl_0.Lib/Tyuiu.IbrayevAA.CoursControl_0.Lib.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			ISprint0Task8V0* add = new Service();
			int a{};
			int v{};


			v = add->Control(a);
			Assert::AreEqual(v, v);
		}
	};
}
