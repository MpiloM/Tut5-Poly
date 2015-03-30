#include <iostream>
#include <math.h>

using namespace std;


#ifndef SHAPE_H
#define SHAPE_H
class Shape
{

public:

	virtual void Name() = 0;
	virtual void perimeter(float, float) = 0;
	virtual void area(float, float) = 0;
	virtual void draw() = 0;

};

class Circle : public Shape
{
public:
	void Name() { cout << " Circle" << endl; }
	void perimeter(float pi, float r) { cout << " Perimeter is " << pi*r << "m." << endl; }
	void area(float pi, float r) { cout << " Area is " << pi*r*r << "m^2." << endl; }
	void draw() { cout << " Circle Drawing" << endl; }
};

class Triangle : public Shape
{
public:

	void Name() { cout << " Triangle" << endl; }
	void perimeter(float b, float h) { cout << " Perimeter is " << b + h + sqrt(b*b + h*h) << "m." << endl; }
	void area(float b, float h) { cout << " Area is " << b*h / 2 << " m^2." << endl; }
	void draw() { cout << " Triangle Drawing" << endl; }
};

class Rectangle : public Shape
{
public:
	void Name() { cout << " Rectangle" << endl; }
	void perimeter(float b, float h) { cout << " Perimeter is " << 2 * (b + h) << "m." << endl; }
	void area(float b, float h) { cout << " Area is " << b*h << " m^2." << endl; }
	void draw() { cout << " Rectangle Drawing" << endl; }
};

#endif
