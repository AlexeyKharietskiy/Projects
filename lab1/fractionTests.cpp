﻿#include "pch.h"
#include "CppUnitTest.h"
#include "..//ppois1/fraction.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace fractionTests
{
	TEST_CLASS(fractionTests)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Natural_fraction a;
			a.set_numerator(7);
			a.set_denominator(3);
			a.get_integer_part();
			a.get_numerator();
			a.get_denominator();
		}
		TEST_METHOD(TestMethod2)
		{
			Natural_fraction a,b,c;
			b.set_numerator(8);
			b.set_denominator(-7);
			c.set_numerator(-5);
			c.set_denominator(3);
			a = b + c;
			b = c - a;
			c = b * a;
			a = b / c;
			b = c + 2;
			c = a - 1;
			a = b * 2;
			b = c / 7;
			a += -1;
			b -= 32;
			c *= -6;
			a /= 7;
			b += a;
			c -= b;
			a *= c;
			b /= a;
		}
		TEST_METHOD(TestMethod3)
		{
			Natural_fraction a;
			++a;
			a++;
			a--;
			--a;
		}
		TEST_METHOD(TestMethod4)
		{
			Natural_fraction a, b;
			a.set_numerator(1);
			a.set_denominator(-2);
			b.set_numerator(5);
			b.set_denominator(3);
			if(a > b)
			a++;
			if(a < b)
			b++;
			if(a >= b)
			b -= a;
			if(a <= b);
			if (b > 1 || a < 2.3)
				a += b;
			else if (a++ >= 4 || --b <= 3)
				b *= a;
		}
	};
}