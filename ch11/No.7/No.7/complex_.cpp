#include "complex_.h"



complex_::complex_()
{
	real = imaginary = 0;
}

complex_::complex_(double r, double i)
{
	real = r;
	imaginary = i;
}


complex_::~complex_()
{
}

complex_ complex_::operator-()
{
	return complex_(real, -imaginary);
}

complex_ operator+(const complex_ &a, const complex_ &b)
{
	return complex_(a.real + b.real, a.imaginary + b.imaginary);
}
complex_ operator-(const complex_ &a, const complex_ &b)
{
	return complex_(a.real - b.real, a.imaginary - b.imaginary);
}
complex_ operator*(const complex_ &a, const complex_ &b)
{
	return complex_(a.real * b.real - a.imaginary * b.imaginary, a.real * b.real + a.imaginary * b.imaginary);
}
complex_ operator*(double n, const complex_ &b)
{
	return complex_(n * b.real, n * b.imaginary);
}

ostream & operator<<(ostream & os, const complex_ &a)
{
	os << "(" << a.real << ", " << a.imaginary << "i)" << endl;
	return os;
}

istream & operator>>(istream & is, complex_ &a)
{
	cout << "Enter real part: ";
	is >> a.real;
	cout << "Enter imaginary part: ";
	is >> a.imaginary;
	return is;
}

