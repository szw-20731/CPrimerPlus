#include "stack.h"




stack::stack(int n)
{
	size = n;
	top = 0;
	pitems = new Item[size];
}

stack::stack(const stack & st)
{
	size = st.size;
	top = st.top;
	pitems = new Item[size];
	for (int i = 0; i < top; i++)
		pitems[i] = st.pitems[i];
}

stack::~stack()
{
	delete[] pitems;
}

bool stack::isempty() const
{
	if (top == 0)
		return true;
	return false;
}

bool stack::isfull() const
{
	if (top == size)
		return true;
	return false;
}

bool stack::push(const Item & item)
{
	if (isfull())
		return false;
	pitems[top++] = item;
	return true;
}

bool stack::pop(Item & item)
{
	if (isempty())
		return false;
	item = pitems[--top];
	return true;
}

stack & stack::operator=(const stack & st)
{
	if (&st == this)
		return *this;
	delete[] pitems;
	size = st.size;
	top = st.top;
	pitems = new Item[size];
	for (int i = 0; i < top; i++)
		pitems[i] = st.pitems[i];
	return *this;
}

std::ostream &operator<<(std::ostream &os, const stack &s)
{
	os << "Len: " << s.top << "Items: ";
	for (int i = 0; i < s.top; i++)
		os << s.pitems[i] << " ";
	os << "\n";
	return os;
}
