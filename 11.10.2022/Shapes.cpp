#include "Shapes.h"

shps::Shapes::Shapes()
{
	setDot_1({ 0, 0 });
	setDot_2({ 0, 0 });
}

shps::Shapes::Shapes(double _w, double _h)
{
	width = _w;
	height = _h;
}

void shps::Shapes::setDot_1(const pnt::Point2D& dot)
{
	dots[DOT_1] = dot;
}

void shps::Shapes::setDot_2(const pnt::Point2D& dot)
{
	dots[DOT_2] = dot;
}

pnt::Point2D shps::Shapes::getDot_1()
{
	return dots[DOT_1];
}

pnt::Point2D shps::Shapes::getDot_2()
{
	return dots[DOT_2];
}

void shps::Shapes::setWidth(const double& _w)
{
	width = _w;
}

void shps::Shapes::setHeight(const double& _h)
{
	height = _h;
}

double shps::Shapes::getWidth()
{
	return width;
}

double shps::Shapes::getHeight()
{
	return height;
}

double shps::Rect::getSquare()
{
	return getWidth() * getHeight();
}

double shps::Triangle::getSquare()
{
	return getWidth() * getHeight() / 4;
}
