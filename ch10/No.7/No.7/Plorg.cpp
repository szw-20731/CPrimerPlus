#include "Plorg.h"



Plorg::Plorg():name("Plorga")
{
}

Plorg::Plorg(char * name)
{
	strcpy_s(this->name, name);
	this->ci = 50;
}


Plorg::~Plorg()
{
}

void Plorg::reset(int ci)
{
	this->ci = ci;
}

void Plorg::show()
{
	std::cout << this->name << "," << this->ci << std::endl;
}
