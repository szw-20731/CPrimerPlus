#include "Cd.h"



Cd::Cd(char * s1, char * s2, int n, double x)
{
	strcpy_s(performance, s1);
	strcpy_s(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd()
{
}


Cd::~Cd()
{
}

void Cd::report() const
{
	std::cout << "Performance: " << performance << std::endl;
	std::cout << "Label: " << label << std::endl;
	std::cout << "Selections: " << selections << std::endl;
	std::cout << "Playtime: " << playtime << std::endl;
}

Classic::Classic(char * s3, char * s1, char * s2, int n, double x):Cd(s1, s2, n, x)
{
	strcpy_s(product, s3);
}

Classic::Classic()
{
}

void Classic::report() const
{
	Cd::report();
	std::cout << "Products: " << product << std::endl;
}
