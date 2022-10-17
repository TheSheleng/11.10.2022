#include "Fraction.h"

frctn::Fraction::Fraction()
{
	set(0, 0);
}

frctn::Fraction::Fraction(int _n, int _d)
{
	set(_n, _d);
}

frctn::Fraction::Fraction(double _n)
{
	set(_n);
}

void frctn::Fraction::set(int _n, int _d)
{
	numerator = _n;
	denominator = _d;
}

void frctn::Fraction::set(double _n)
{
	set(_n, 10);
}

frctn::Fraction::operator double()
{
	return (double)numerator / denominator;
}

double frctn::Fraction::get()
{
	return *this;
}
