#include"cylinder.h"
#include <cmath>

cylinder::cylinder()
{
	Radius = 0.0;
	Height = 0.0;
}

cylinder::~cylinder()
{
}

void cylinder::setRadius(double r)
{
	Radius = r;
}

void cylinder::setHeight(double h)
{
	Height = h;
}


double cylinder::getRadius()
{
	return Radius;
}

double cylinder::getHeight()
{
	return Height;
}

double cylinder::calculateVolume()
{
	return pi*Height*pow(Radius,2);
}

double cylinder::calculateSurfaceArea()
{
	return (2*pi*Radius*Height)+2*pi*pow(Radius,2);
}
