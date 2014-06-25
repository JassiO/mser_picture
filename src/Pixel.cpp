
#include <Pixel.h>

Pixel::Pixel():
	x(0.0),
	y (0.0)
	{}

Pixel::Pixel(Pixel const& p):
	x(p.get_x()),
	y(p.get_y())
	{}

Pixel::~Pixel() {}

//getter
double Pixel::get_x() const {
	return x;
}

double Pixel::get_y() const {
	return y;
}

//setter
void Pixel::set_x(double s) {
	x = s;
}


void Pixel::set_y(double s) {
	y = s;
}
