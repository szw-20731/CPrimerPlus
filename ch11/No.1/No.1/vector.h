#pragma once
#include <iostream>
class vector
{
public:
	enum Mode{RECT, POL};
private:
	double x;
	double y;
	double mag;
	double ang;
	Mode mode;
	void set_x();
	void set_y();
	void set_mag();
	void set_ang();
public:
	vector();
	vector(double n1, double n2, Mode form = RECT);
	void reset(double n1, double n2, Mode form = RECT);
	double get_x() const { return x; };
	double get_y() const { return y; };
	double get_mag() const { return mag; };
	double get_ang() const { return ang; };

	void pol_mode();
	void rect_mode();
	~vector();


	vector operator + (const vector &b) const;
	vector operator - (const vector &b) const;
	vector operator - () const;
	vector operator * (double n) const;

	friend std::ostream &operator<< (std::ostream & os, const vector &a);
};


