#include <iostream>
#include <math.h>
#define pi 3.14159

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
	void Name() 
	{ 
		cout << " Circle" << endl; 
	}
	void perimeter(float pi, float r) 
	{
		cout << " Perimeter is " << pi*r << "m." << endl; 
	}
	void area(float pi, float r) 
	{
		cout << " Area is " << pi*r*r << "m^2." << endl; 
	}
	void draw()
	{
		cout << " Circle Drawing" << endl;
	}
};

class Triangle : public Shape
{
public:

	void Name() 
	{
		cout << " Triangle" << endl; 
	}
	void perimeter(float b, float h) 
	{ 
		cout << " Perimeter is " << b + h + sqrt(b*b + h*h) << "m." << endl;
	}
	void area(float b, float h)
	{ 
		cout << " Area is " << b*h / 2 << " m^2." << endl; 
	}
	void draw() 
	{ 
		cout << " Triangle Drawing" << endl; 
	}
};

class Rectangle : public Shape
{
public:
	void Name() 
	{ 
		cout << " Rectangle" << endl;
	}
	void perimeter(float b, float h) 
	{
		cout << " Perimeter is " << 2 * (b + h) << "m." << endl; 
	}
	void area(float b, float h) 
{
	cout << " Area is " << b*h << " m^2." << endl;
	}
	void draw()
	{
		cout << " Rectangle Drawing" << endl;
	}
};

#endif
/*
Shape Declarations
*/


int main()
{
	// Declaration of Objects
	Circle A;
	Triangle B;
	Rectangle C;

	// ------------ Name Handling ---------------------
	cout << " Polymophism Demonstration" << endl << endl;
	cout << " --------------------------" << endl;
	cout << " 1] Name Handling" << endl;
	cout << " --------------------------" << endl;

	// Circle
	A.Name();
	A.perimeter(pi, 4);
	A.area(pi, 4);
	A.draw();

	cout << endl;

	// Triangle
	B.Name();
	B.perimeter(4, 6);
	B.area(4, 6);
	B.draw();

	cout << endl;

	// Ractangle
	C.Name();
	C.perimeter(4, 8);
	C.area(4, 8);
	C.draw();

	cout << endl;

	// ------------ Pointer/Reference Handling  -----------------
	// Pointers Declarations
	Shape *circlePt = &A;
	Shape *trianglePt = &B;
	Shape *ractanglePt = &C;

	cout << " --------------------------" << endl;
	cout << " 2] Pointer Handling" << endl;
	cout << " --------------------------" << endl;

	// Circle
	circlePt->Name();
	circlePt->perimeter(pi , 10);
	circlePt->area(pi , 10);
	circlePt->draw();

	cout << endl;
	// Triangle
	trianglePt->Name();
	trianglePt->perimeter(5, 10);
	trianglePt->area(5, 10);
	trianglePt->draw();

	cout << endl;
	// Ractangle
	ractanglePt->Name();
	ractanglePt->perimeter(2, 9);
	ractanglePt->area(2, 9);
	ractanglePt->draw();

	cout << endl;

	// *********** Array Demo ************

	Shape *Array[] = { circlePt, trianglePt, ractanglePt };

	cout << " --------------------------" << endl;
	cout << " 3] Handling Using Array" << endl;
	cout << " --------------------------" << endl;

	// Circle
	Array[0]->Name();
	Array[0]->perimeter(pi , 8);
	Array[0]->area(pi , 8);
	Array[0]->draw();

	cout << endl;

	// Triangle
	Array[1]->Name();
	Array[1]->perimeter(4, 4);
	Array[1]->area(4, 4);
	Array[1]->draw();

	cout << endl;

	// Rectangle
	Array[2]->Name();
	Array[2]->perimeter(3, 7);
	Array[2]->area(3, 7);
	Array[2]->draw();

	cout << endl;

	return 0;
}