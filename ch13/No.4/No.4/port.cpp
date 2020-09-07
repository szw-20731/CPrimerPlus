#include "port.h"


port::port(const char * br, const char * st, int b)
{
	int len = strlen(br);
	brand = new char[len + 1];
	strcpy_s(brand, len + 1, br);
	strcpy_s(style, st);
	bottles = b;
}

port::port(const port & p)
{
	int len = strlen(p.brand);
	brand = new char[len + 1];
	strcpy_s(brand, len + 1, p.brand);
	strcpy_s(style, p.style);
	bottles = p.bottles;
}

port & port::operator=(const port & p)
{
	if (&p == this)
		return *this;
	delete[] brand;
	int len = strlen(p.brand);
	brand = new char[len + 1];
	strcpy_s(brand, len + 1, p.brand);
	strcpy_s(style, p.style);
	bottles = p.bottles;
	return *this;
}

port & port::operator+=(int b)
{
	bottles = bottles + b;
	return *this;
}

port & port::operator--(int b)
{
	if (b > bottles)
		bottles = 0;
	bottles = bottles - b;
	return *this;
}

void port::show() const
{
	cout << "Brand: " << brand << endl;
	cout << "Kind: " << style << endl;
	cout << "Bottles: " << bottles << endl;
}

ostream &operator<<(ostream &os, const port &p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles;
	return os;
}

vintageport::vintageport(const char * br, int n, const char * nn, int y):port(br, "vintage", n)
{
	int len = strlen(nn);
	nickname = new char[len + 1];
	strcpy_s(nickname, len + 1, nn);
	year = y;
}

vintageport::vintageport(const vintageport & v):port(v)
{
	int len = strlen(v.nickname);
	nickname = new char[len + 1];
	strcpy_s(nickname, len + 1, v.nickname);
	year = v.year;
}

vintageport & vintageport::operator=(const vintageport & v)
{
	if (this == &v)
		return *this;
	port::operator=(v);
	delete[] nickname;
	int len = strlen(v.nickname);
	nickname = new char[len + 1];
	strcpy_s(nickname, len + 1, v.nickname);
	year = v.year;
	return *this;
}

void vintageport::show() const
{
    port::show();
	cout << "nickname: " << nickname << endl;
	cout << "Year: " << year << endl;
}

ostream &operator<<(ostream &os, const vintageport &v)
{
	os<< (const port &)v;
	os << ", " << v.nickname << ", " << v.year;
	return os;
}
