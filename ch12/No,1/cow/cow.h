#pragma once
#include <string>
#include <iostream>

using namespace std;
class cow
{
	char name[20];
	char * hobby;
	double weight;
public:
	cow();
	cow(const char *nm, const char * ho, double wt);
	cow(const cow &c);
	~cow();
	cow &operator=(const cow &c);
	void show() const;
};

