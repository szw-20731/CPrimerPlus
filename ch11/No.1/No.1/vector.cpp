#include <cmath>
#include "vector.h"
using namespace std;


void vector::set_x()
{
	x = mag * cos(ang);
}

void vector::set_y()
{
	y = mag * sin(ang);
}

void vector::set_mag()
{
	mag = sqrt(x * x + y * y);
}

void vector::set_ang()
{
	if (x == 0 && y == 0)
		ang = 0;
	else
		ang = atan2(y, x);
}

vector::vector()
{
	x = y = mag = ang = 0;
	mode = RECT;
}

vector::vector(double n1, double n2, Mode form)
{
	mode = form;
	if (mode == RECT) {
		x = n1;
		y = n2;
		set_mag();
		set_ang();
	}
	else if (mode == POL) {
		mag = n1;
		ang = n2;
		set_x();
		set_y();
	}
	else {
		cout << "Incorrect 3rd argument to Vector() --";
		cout << "vector set to 0\n";
		x = y = mag = ang = 0;
		mode = RECT;
	}
}

void vector::reset(double n1, double n2, Mode form)
{
	mode = form;
	if (mode == RECT) {
		x = n1;
		y = n2;
		set_mag();
		set_ang();
	}
	else if (mode == POL) {
		mag = n1;
		ang = n2;
		set_x();
		set_y();
	}
	else {
		cout << "Incorrect 3rd argument to Vector() --";
		cout << "vector set to 0\n";
		x = y = mag = ang = 0;
		mode = RECT;
	}
}


void vector::pol_mode()
{
	mode = POL;
}

void vector::rect_mode()
{
}

vector::~vector()
{
	mode = RECT;
}

vector vector::operator+(const vector & b) const
{
	return vector(x + b.x, y + b.y);
}

vector vector::operator-(const vector & b) const
{
	return vector(x - b.x, y - b.y);
}

vector vector::operator-() const
{
	return vector(-x, -y);
}

vector vector::operator*(double n) const
{
	return vector(n * x, n * y);
}

ostream &operator<< (ostream & os, const vector &a) 
{
	if (a.mode == vector::RECT) {
		os << "(x, y) = (" << a.x << ", " << a.y << ")";
	}
	else if (a.mode == vector::POL) {
		os << "(mag, ang) = (" << a.mag << ", " << a.ang << ")";
	}
	else {
		os << "Vector object mode is invalid!";
	}
	return os;
}
