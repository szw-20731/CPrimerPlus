#include "Stack.h"



Stack::Stack()
{
	this->sum = 0;
	this->n = 0;
}


Stack::~Stack()
{
}

void Stack::push(customer c)
{
	if (n == 40) 
		return;
	this->c[++(this->n)] = c;
}

void Stack::pop()
{
	if (n == 0)
		return;
	this->sum += this->c[this->n].payment;
	(this->n)--;
	std::cout << this->sum << std::endl;
}
