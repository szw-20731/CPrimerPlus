#include "Move.h"




Move::Move(double a, double b)
{
	this->x = a;
	this->y = b;
}

Move::~Move()
{
}

void Move::showmove() const
{
	std::cout << this->x << ", " << this->y << std::endl;
}

Move Move::add(const Move & m) const
{
	int t1 = this->x + m.x;
	int t2 = this->y + m.y;
	Move a(t1, t2);
	return a;
}

void Move::reset(double a, double b)
{
	this->x = a;
	this->y = b;
}
