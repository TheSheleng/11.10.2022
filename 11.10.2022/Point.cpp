#include "Point.h"

pnt::Point2D::Point2D()
{
	set(0, 0);
}

pnt::Point2D::Point2D(double __x, double __y)
{
	set(__x, __y);
}

void pnt::Point2D::set(double __x, double __y)
{
	_x = __x;
	_y = __y;
}

double pnt::Point2D::getX()
{
	return _x;
}

double pnt::Point2D::getY()
{
	return _y;
}

pnt::Point3D::Point3D()
{
	set(0, 0, 0);
}

pnt::Point3D::Point3D(double __x, double __y, double __z)
{
	set(__x, __y, __z);
}

void pnt::Point3D::set(double __x, double __y, double __z)
{
	_x = __x; 
	_y = __y;
	_z = __z;
}

double pnt::Point3D::getX()
{
	return _x;
}

double pnt::Point3D::getY()
{
	return _y;
}

double pnt::Point3D::getZ()
{
	return _z;
}
