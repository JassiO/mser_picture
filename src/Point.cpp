
#include <Point.h>

Point::Point():
	x(0.0),
	y (0.0)
	{}

Point::Point(Point const& p):
	x(p.get_x()),
	y(p.get_y())
	{}

Point::~Point() {}

//getter
double Point::get_x() const {
	return x;
}

double Point::get_y() const {
	return y;
}

//setter
void Point::set_x(double s) {
	x = s;
}


void Point::set_y(double s) {
	y = s;
}