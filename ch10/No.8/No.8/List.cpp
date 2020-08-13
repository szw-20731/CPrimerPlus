#include "List.h"



List::List()
{
	this->len = 0;
}


List::~List()
{
}

bool List::isfull()
{
	if (this->len == MAX)
		return true;
	return false;
}

bool List::isempty()
{
	if (this->len == 0)
		return true;
	return false;
}

void List::add(Item  a)
{
	if (this->len < MAX) {
		this->items[len++] = a;
		return;
	}
	cout << "FULL!" << endl;
}

void List::visit(void (*pf) (Item &))
{
	for (int i = 0; i < this->len; i++)
		if (this->items[i] == 0)
			pf(this->items[i]);
}

void List::show() 
{
	for (int i = 0; i < this->len; i++)
		cout << items[i] << endl;
}

void f(Item & a)
{
	a = 110;
}

