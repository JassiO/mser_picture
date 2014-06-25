
#include <Pixel.h>

Pixel::Pixel():
	x(0),
	y(0),
	intensity(0.0)
	{}

Pixel::Pixel(Pixel const& p, double i):
	x(p.get_x()),
	y(p.get_y()),
	intensity(i)
	{}

Pixel::~Pixel() {}

//getter
int Pixel::get_x() const {
	return x;
}

int Pixel::get_y() const {
	return y;
}

double Pixel::get_intensity() const {
	return intensity;
}

//setter
void Pixel::set_x(int s) {
	x = s;
}

void Pixel::set_y(int s) {
	y = s;
}

void Pixel::set_intensity(double i) {
	intensity = i;
}
