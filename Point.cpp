#include "Point.h"
#include <iostream>

using namespace std;

Point::Point() {
	x = y = 0;
}

void Point::setValues(double xVal, double yVal) {
	x = xVal;
	y= yVal;
}

double Point::getXvalue() {
	return x;
}

double Point::getYvalue() {
	return y;
}
void Point::display() {
	cout << "(" << x << "," << y << ")" << endl;
}

double Point::dist(Point p) {
	return sqrt((abs(pow(x - p.x, 2)) + (abs(pow(y - p.y, 2)))));
}

// Requirement: height formula
double Point::height(Point p) {
	return (abs(((y - p.y) * p.x) - ((x - p.x) * p.y) + ((x * p.y) - (y * p.x))) / (sqrt(pow(x - p.x, 2) + pow(y - p.y, 2))));
}
ostream& operator<<(ostream& out, Point& p) {
	return out << "(" << p.getXvalue() << "," << p.getYvalue() << ")";
}