#include <iostream>

#include "Fraction.h"
#include "Point.h"
#include "Shapes.h"

using namespace std;

int main()
{
	frctn::Fraction test_Fraction(3,5);
	cout << test_Fraction.get() << endl;

	pnt::Point3D test_Point(3, 5, 4);
	cout << test_Point.getX() << " " << test_Point.getY() << " " << test_Point.getZ() << endl;

	shps::Rect test_Shapes(5, 3);
	cout << test_Shapes.getSquare();
}