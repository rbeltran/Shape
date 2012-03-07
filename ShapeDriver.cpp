#include <iostream>
#include "Square.h"
using namespace std;

int main() {

	Square square;

	square.setSide( 4 );
	cout << "The Area of your square is " << square.area() ;

}
