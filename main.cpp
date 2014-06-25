
#include <Pixel.h>
#include <Image.h>

int main() {
	
	Pixel first_point;
	Image first_image;

	if(!first_image.loadImage("binary.png", false)) {
		std::cout << "Error: image did not load" << std::endl;
		return 0;
	}
	
	first_image.showImage("hallo");


	std::cout << first_image.get_width() << std::endl;

}