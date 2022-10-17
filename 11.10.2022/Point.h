#pragma once

namespace pnt
{
	class Point2D
	{
		double _x;
		double _y;

	public:
		Point2D();
		Point2D(double, double);

		void set(double, double);
		double getX();
		double getY();
	};

	class Point3D
	{
		double _x;
		double _y;
		double _z;

	public:
		Point3D();
		Point3D(double, double, double);

		void set(double, double, double);
		double getX();
		double getY();
		double getZ();
	};
}

