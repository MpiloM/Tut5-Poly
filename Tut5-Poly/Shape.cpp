/*
Shape Declarations
*/

#include <iostream>
#include "Shape.h"

const float PI = 3.14159;

using namespace std;

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
	A.perimeter(PI, 4);
	A.area(PI, 4);
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
	circlePt->perimeter(PI, 10);
	circlePt->area(PI, 10);
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
	Array[0]->perimeter(PI, 8);
	Array[0]->area(PI, 8);
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

	system("pause");
	return 0;
}