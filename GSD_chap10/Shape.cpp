#include <iostream>
#include "Shape.h"
using namespace std;

void Shape::paint() {
	draw();
}

void Shape::draw() {
	cout << "--shape--" << endl;
}

Shape* Shape::add(Shape* p) {
	this->next = p;
	return p;
}