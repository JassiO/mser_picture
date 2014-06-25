#include <opencv2/opencv.hpp>
#include <Point.h>

#if !defined(IMAGE_HPP)

#define IMAGE_HPP

class Image {
	
	public:
		Image();
		Image(std::string filename, bool is_color);
		~Image();

		bool loadImage(std::string filename, bool is_color);
		void showImage(std::string windowname);

		// getter
		int get_width() const;
		int get_height() const;

	private:
		cv::Mat								img;
		int 								width;
		int 								height;
		std::vector<std::vector<double> >	pixels;

};

#endif