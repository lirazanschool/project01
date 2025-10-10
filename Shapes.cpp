#include<iostream>
#include<cmath>
#include"Shapes.h"

using namespace std;

Polygon::Polygon() {
	numPoints = 0;
	shapeName = "Polygon";
}
void Polygon::setPoints(double x[], double y[], int numP) {
	numPoints = numP;

	for (int i = 0; i < numPoints; i++) {
		x[i] = vertex[i].getXvalue();
		y[i] = vertex[i].getYvalue();
		vertex[i].setValues(x[i], y[i]);
	}
}
void Polygon::displayPoints() {
	for (int i = 0; i < numPoints; i++) {
		vertex[i].display();
	}
}
double Polygon::getPerimeter() {
	double P = 0;
	for (int i = 0; i < numPoints; i++) {
		P += vertex[i].dist(vertex[(i + 1)]);
	}
	return P;
}

Triangle::Triangle(double x1, double y1, double x2,
	double y2, double x3, double y3) {
	numPoints = 3;
	shapeName = "Triangle";
	Point p1 = vertex[0], p2 = vertex[1], p3 = vertex[2];
	p1.setValues(x1, y1);
	p2.setValues(x2, y2);
	p3.setValues(x3, y3);

}
double Triangle::getArea(int R) {
	double a = 0, b = 0, c = 0, h = 0;
	for (int i = 0; i < numPoints; i++) {
		a = vertex[i].dist(vertex[i + 1]);
		b = vertex[i].dist(vertex[i + 1]);
		h = vertex[i].height(vertex[i + 1]);
	}

}
EQ_Triangle::EQ_Triangle(double x1, double y1, double x2,
	double y2, double x3, double y3) :Triangle(x1, y1, x2, y2, x3, y3) {
	shapeName = "Equilateral Triangle";
}
R_Triangle::R_Triangle(double x1, double y1, double x2,
	double y2, double x3, double y3) :Triangle(x1, y1, x2, y2, x3, y3) {
	shapeName = "Right Triangle";
}

Parallelogram::Parallelogram(double x1, double y1, double x2,
	double y2, double x3, double y3,
	double x4, double y4) {
	numPoints = 4;
	shapeName = "Parallelogram";
	Point p1 = vertex[0], p2 = vertex[1], p3 = vertex[2], p4 = vertex[3];
	p1.setValues(x1, y1);
	p2.setValues(x2, y2);
	p3.setValues(x3, y3);
	p4.setValues(x4, y4);
}
double Parallelogram::getArea() {
	int a, h;

	a = vertex[0].dist(vertex[1]);


	

	

		r = acos(((a * a) + (b * b) - (p * p)) / (2 * a * b));
		

	

	
		return a * h;

	

}

Rectangle::Rectangle(double x1, double y1, double x2,
	double y2, double x3, double y3,
	double x4, double y4) : Parallelogram(x1, y1, x2, y2, x3, y3, x4, y4) {
	shapeName = "Rectangle";
}


