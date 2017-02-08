#pragma once

class Circle {

public:
	Circle();  // Create a default circle with radius 0.
	Circle(double radius); // Create a circle with a given radius.  Must be positive, or it defaults to 0.

	// Basic getters and a setter.
	double getArea() const; // Returns the area of the circle (pi * r * r)
	double getRadius() const;
	void setRadius(double radius); // Radius must be positive.

	// Creates a new circle whose radius is the sum of the two given circles.
	Circle operator+(Circle* c);

private:
	double radius;

};
