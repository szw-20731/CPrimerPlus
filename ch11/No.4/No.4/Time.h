#pragma once
#include <iostream>

class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void AddHr(int h);
	void AddMin(int m);
	void reset(int h = 0, int m = 0);
	~Time();

	friend Time operator+(const Time &a, const Time &b);
	friend Time operator-(const Time &a, const Time &b);
	friend Time operator*(const double n, const Time &b);
	friend Time operator*(const Time &b, const double n);
	friend std::ostream & operator<<(std::ostream &os, const Time &t);
};

