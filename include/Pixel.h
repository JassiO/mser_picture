
#if !defined(PIXEL_HPP)

#define PIXEL_HPP

class Pixel {

	public:
		Pixel();
		Pixel(Pixel const&);
		Pixel(int, int);
		~Pixel();

		//getter
		int get_x() const;
		int get_y() const;
		double get_intensity() const;


		//setter
		void set_x(int);
		void set_y(int);
		void set_intensity(double);

	private:
		int		x;
		int		y;
		double intensity;

};

#endif
