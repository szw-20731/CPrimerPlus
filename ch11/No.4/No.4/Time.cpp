#include "Time.h"



Time::Time()
{
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::AddHr(int h)
{
	hours += h;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void Time::reset(int h, int m)
{
	hours = h;
	minutes = m;
}


Time::~Time()
{
}

Time operator+(const Time &a, const Time &b)
{
	int sum = a.minutes + b.minutes;
	return Time(a.hours + b.hours + sum / 60, sum % 60);
}

Time operator-(const Time &a, const Time &b)
{
	int sum1 = a.hours * 60 + a.minutes;
	int sum2 = b.hours * 60 + b.minutes;
	int sum = sum1 - sum2;
	return Time(sum/60, sum % 60);
}

Time operator*(const double n, const Time &b)
{
	int sum = (b.hours * 60 + b.minutes) * n;
	return Time(sum / 60, sum % 60);
}
Time operator*(const Time &b, const double n)
{
	int sum = (b.hours * 60 + b.minutes) * n;
	return Time(sum / 60, sum % 60);
}
std::ostream & operator<<(std::ostream &os, const Time &t)
{
	os << t.hours << ":" << t.minutes << std::endl;
	return os;
}