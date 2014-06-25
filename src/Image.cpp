#include <opencv2/opencv.hpp>
#include <iostream>
#include <Image.h>

Image::Image():
	img(), 
	width(0),
	height(0),
	pixels()
	{}

Image::Image(std::string filename, bool is_color) {
	if (is_color) {
		img = cv::imread(filename, CV_LOAD_IMAGE_COLOR);
	}
	else {
		img = cv::imread(filename, CV_LOAD_IMAGE_GRAYSCALE);
	} 
	width 	= img.rows;
	height 	= img.cols;

	std::vector<double> rowvec;
	for (int i = 0; i < width; ++i) {
		for(int j = 0; j < height; ++j) {
			rowvec[j] = img.at<double>(i,j);
		}
		pixels.push_back(rowvec);
	}
}

Image::~Image() {}

bool Image::loadImage(std::string filename, bool is_color) {
	if(is_color) {
		img = cv::imread(filename, CV_LOAD_IMAGE_COLOR);
	}
	else {
		img = cv::imread(filename, CV_LOAD_IMAGE_GRAYSCALE);
	}
	
	if(img.data) {
		return true;
	}
	else {
		return false;
	}

}

void Image::showImage(std::string windowname) {
	cv::imshow("Window", img);
	cv::waitKey();
}

// getter
int Image::get_width() const {
	return img.size().width;
}

int Image::get_height() const {
	return img.size().height;
}