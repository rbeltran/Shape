#include <iostream>
#include "Rectangle.h"
using namespace std;


void Rectangle::setWidth( int width ) {
	this->width = width;
}
void Rectangle::setHeight( int width ) {
	this->height = width;
}
int Rectangle::area() {
	return width * height;
}


