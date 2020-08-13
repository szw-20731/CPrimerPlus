#pragma once

#include <iostream>
const int MAX = 19;

class Plorg
{	
public:
	Plorg();
	Plorg(char *name);
	~Plorg();
	void reset(int ci);
	void show();
private:
	char name[MAX];
	int ci;
};

