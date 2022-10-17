#pragma once

namespace frctn
{
	class Fraction
	{
		int numerator;
		int denominator;

	public:
		Fraction();
		Fraction(int, int);
		Fraction(double);

		void set(int, int);
		void set(double);

		operator double();
		double get();
	};
}

