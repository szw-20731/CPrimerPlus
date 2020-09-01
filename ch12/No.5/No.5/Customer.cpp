#include "Customer.h"
#include <ctime>


Customer::Customer()
{
	arrive = processtime = 0;
}


Customer::~Customer()
{
}

void Customer::set(int when)
{
	std::srand(time(0));
	arrive = when;
	processtime = std::rand() % 20 + 1;
}
