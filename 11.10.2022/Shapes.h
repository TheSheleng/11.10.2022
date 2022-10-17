#pragma once

#include "Point.h"

namespace shps
{
	class Shapes
	{
		enum
		{
			DOT_1,
			DOT_2
		};

		pnt::Point2D dots[2];
		double width;
		double height;

	public:
		Shapes();
		Shapes(double, double);

		void setDot_1(const pnt::Point2D&);
		void setDot_2(const pnt::Point2D&);
		pnt::Point2D getDot_1();
		pnt::Point2D getDot_2();

		void setWidth(const double&);
		void setHeight(const double&);
		double getWidth();
		double getHeight();

		virtual double getSquare() = 0;
	};

	class Rect : public Shapes
	{
	public:
		Rect() : Shapes() {}
		Rect(double _w, double _h) : Shapes(_w, _h) {}
		double getSquare() override;
	};

	class Triangle : public Shapes
	{
	public:
		Triangle() : Shapes() {}
		Triangle(double _w, double _h) : Shapes(_w, _h) {}
		double getSquare() override;
	};
}
