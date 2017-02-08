#include "Circle.h"
using namespace std;

Circle::Circle()
{
	radius = 0; // Set default radius.
}
Circle::Circle(double radius)
{

	if (radius > 0) this->radius = radius;
	else radius = 0;

}

double Circle::getArea() const
{
	return (3.14159265*radius*radius);
}

double Circle::getRadius() const
{
	return radius;
}

void Circle::setRadius(double radius)
{
	if (radius > 0) this->radius = radius;
}

Circle Circle::operator+(Circle * c)
{
	return Circle(this->radius + c->radius);
}
