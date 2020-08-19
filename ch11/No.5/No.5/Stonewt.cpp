#include <iostream>
using std::cout;
#include "Stonewt.h"

Stonewt::Stonewt()
{
	stone = pounds = pds_left = 0;
}

Stonewt::Stonewt(double lbs, Mode mode)
{
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
	this->mode = mode;
}

Stonewt::Stonewt(int stn, double lbs, Mode mode)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
	this->mode = mode;
}

void Stonewt::Stone_mode()
{
	mode = Stone;
}

void Stonewt::IntPds_mode()
{
	mode = IntPds;
}

void Stonewt::DoublePds_mode()
{
	mode = DoublePds;
}

void Stonewt::show_lbs() const
{
	cout << pounds << " pounds\n";
}

void Stonewt::show_stn() const
{
	cout << stone << " stone, " << pds_left << " pounds\n";
}


Stonewt::~Stonewt()
{
}

std::ostream & operator<<(std::ostream &os, const Stonewt &a) {
	if (a.mode == Stonewt::DoublePds)
		os << a.pounds << " pounds\n";
	else if (a.mode == Stonewt::IntPds)
		os << int(a.pounds) << " pounds\n";
	else
		os << a.stone << " stone, " << a.pds_left << " pounds\n";
	return os;
}

Stonewt operator+ (const Stonewt &a, const Stonewt &b)
{
	return Stonewt (a.pounds + b.pounds);
}

Stonewt operator- (const Stonewt &a, const Stonewt &b)
{
	return Stonewt(a.pounds - b.pounds);
}

Stonewt operator* (double n, const Stonewt &b)
{
	return Stonewt(n *  b.pounds);
}
Stonewt operator* (const Stonewt &b, double n)
{
	return Stonewt(n *  b.pounds);
}

