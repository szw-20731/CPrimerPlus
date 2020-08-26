#include "cow.h"



cow::cow()
{
	hobby  = new char[1];
	hobby[0] = '\0';
	weight = 0;
}

cow::cow(const char * nm, const char * ho, double wt)
{
	strcpy_s(name, nm);
	int len = strlen(ho);
	hobby = new char[len + 1];
	strcpy_s(hobby, len + 1 ,ho);
	weight = wt;
}

cow::cow(const cow & c)
{
	weight = c.weight;
	strcpy_s(name, c.name);
	int len = strlen(c.hobby);
	hobby = new char[len + 1];
	strcpy_s(hobby, len + 1, c.hobby);
}


cow::~cow()
{
	delete [] hobby;
}

cow & cow::operator=(const cow & c)
{
	if (this == &c)
		return *this;
	delete[] hobby;
	int len = strlen(c.hobby);
	hobby = new char[len + 1];
	strcpy_s(hobby, len + 1, c.hobby);
	strcpy_s(name, c.name);
	weight = c.weight;
	return *this;
}

void cow::show() const
{
	cout << "name: " << name << ", hobby: " << hobby << ", weight: " << weight << endl;
}


