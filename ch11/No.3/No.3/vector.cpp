#include <cmath>
#include "vector.h"
using namespace std;


void vector::set_x(double mag, double ang)
{
	x = mag * cos(ang);
}

void vector::set_y(double mag, double ang)
{
	y = mag * sin(ang);
}

double vector::get_mag()
{
	return sqrt(x * x + y * y);
}

double vector::get_ang()
{
	if (x == 0 && y == 0)
		return 0;
	else
		return atan2(y, x);
}

vector::vector()
{
	x = y =  0;
	mode = RECT;
}

vector::vector(double n1, double n2, Mode form)
{
	mode = form;
	if (mode == RECT) {
		x = n1;
		y = n2;
	}
	else if (mode == POL) {
		set_x(n1, n2);
		set_y(n1, n2);
	}
	else {
		cout << "Incorrect 3rd argument to Vector() --";
		cout << "vector set to 0\n";
		x = y = 0;
		mode = RECT;
	}
}

void vector::reset(double n1, double n2, Mode form)
{
	mode = form;
	if (mode == RECT) {
		x = n1;
		y = n2;
	}
	else if (mode == POL) {
		set_x(n1, n2);
		set_y(n1, n2);
	}
	else {
		cout << "Incorrect 3rd argument to Vector() --";
		cout << "vector set to 0\n";
		x = y = 0;
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

ostream &operator<< (ostream & os, vector &a) 
{
	if (a.mode == vector::RECT) {
		os << "(x, y) = (" << a.x << ", " << a.y << ")";
	}
	else if (a.mode == vector::POL) {
		os << "(mag, ang) = (" << a.get_mag() << ", " << a.get_ang() << ")";
	}
	else {
		os << "Vector object mode is invalid!";
	}
	return os;
}
