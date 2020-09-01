#pragma once
#include <cstdlib>
class Customer
{
private:
	int arrive;
	int processtime;
public:
	Customer();
	~Customer();
	void set(int when);
	int get_arrive() const { return arrive; };
	int get_processtime() const { return processtime; };
};

