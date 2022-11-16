#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rect.h"
#include "Line.h"
using namespace std;

int main(void) {
	Shape* pStart = NULL;
	Shape* pLast;

	pStart = new Circle();

	pLast = pStart;
	pLast = pLast->add(new Rect());
	pLast = pLast->add(new Circle());
	pLast = pLast->add(new Line());
	pLast = pLast->add(new Rect());

	Shape* s = pStart;
	do {
		s->paint();
		Shape* d = s->getNext();
		delete s;
		s = d;
	} while (s != NULL);

}
	