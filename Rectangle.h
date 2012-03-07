#include <iostream>
#include "Shape.h"
using namespace std;


class Rectangle: public Shape {
	private:
	int width, height;
	public: 
		void setWidth( int width );
		void setHeight( int width );
		int area();

};

