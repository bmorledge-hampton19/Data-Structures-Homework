#include "Circle.h";
#include <iostream>;
using namespace std;

int main() {

	Circle c1(10);
	Circle c2(16);

	Circle c3 = c1 + &c2;

	cout << "The first circle has radius " << c1.getRadius() << "." << endl;
	cout << "The second circle has radius " << c2.getRadius() << "." << endl;
	cout << "The sum of those circles has radius " << c3.getRadius() << "." << endl;

	// Return 0.  Everything is ok!
	return 0;

}