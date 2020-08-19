#pragma once
#include <iostream>
using namespace std;
class complex_
{
private:
	double real;
	double imaginary;
public:
	complex_();
	complex_(double r, double i);
	~complex_();
	
	complex_ operator-();
	friend complex_ operator+(const complex_ &a, const complex_ &b);
	friend complex_ operator-(const complex_ &a, const complex_ &b);
	friend complex_ operator*(const complex_ &a, const complex_ &b);
	friend complex_ operator*(double n, const complex_ &b);

	friend ostream & operator<<(ostream & os, const complex_ &a);
	friend istream & operator>>(istream & is, complex_ &a);

};

