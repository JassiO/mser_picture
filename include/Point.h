
#if !defined(POINT_HPP)

#define POINT_HPP

class Point {

	public:
		Point();
		Point(Point const&);
		Point(double, double);
		~Point();

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