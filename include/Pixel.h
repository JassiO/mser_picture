
#if !defined(PIXEL_HPP)

#define PIXEL_HPP

class Pixel {

	public:
		Pixel();
		Pixel(Pixel const&);
		Pixel(double, double);
		~Pixel();

		//getter
		double get_x() const;
		double get_y() const;

		//setter
		void set_x(double);
		void set_y(double);

	private:
		double	x;
		double	y;

};

#endif
