#include "Cd.h"



Cd::Cd(char * s1, char * s2, int n, double x)
{
	int len = strlen(s1);
	performance = new char[len + 1];
	strcpy_s(performance, len + 1, s1);

	len = strlen(s2);
	label = new char[len + 1];
	strcpy_s(label, len + 1, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & d)
{
	int len = strlen(d.performance);
	performance = new char[len + 1];
	strcpy_s(performance, len + 1, d.performance);

	len = strlen(d.label);
	label = new char[len + 1];
	strcpy_s(label, len + 1, d.label);
	selections =d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
}


Cd::~Cd()
{
	delete[] performance;
	delete[] label;
}

void Cd::report() const
{
	std::cout << "Performance: " << performance << std::endl;
	std::cout << "Label: " << label << std::endl;
	std::cout << "Selections: " << selections << std::endl;
	std::cout << "Playtime: " << playtime << std::endl;
}

Cd & Cd::operator=(const Cd & d)
{
	if (this == &d)
		return *this;
	delete[] performance;
	delete[] label;
	int len = strlen(d.performance);
	performance = new char[len + 1];
	strcpy_s(performance, len + 1, d.performance);

	len = strlen(d.label);
	label = new char[len + 1];
	strcpy_s(label, len + 1, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Classic::Classic(char * s3, char * s1, char * s2, int n, double x):Cd(s1, s2, n, x)
{
	int len = strlen(s3);
	product = new char[len + 1];
	strcpy_s(product, len + 1, s3);
}

Classic::Classic()
{
}

Classic::~Classic()
{
	delete[] product;
}

Classic::Classic(const Classic & d):Cd(d)
{
	int len = strlen(d.product);
	product = new char[len + 1];
	strcpy_s(product, len + 1, d.product);
}

void Classic::report() const
{
	Cd::report();
	std::cout << "Products: " << product << std::endl;
}

Classic & Classic::operator=(const Classic & d)
{
	if (this == &d)
		return *this;
	Cd::operator=(d);
	delete [] product;
	int len = strlen(d.product);
	product = new char[len + 1];
	strcpy_s(product, len + 1, d.product);
}
