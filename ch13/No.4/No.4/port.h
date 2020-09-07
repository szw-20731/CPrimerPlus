#pragma once
#include <iostream>
using namespace std;
class port
{
private:
	char *brand;
	char style[20];
	int bottles;
public:
	port(const char *br = "none", const char * st = "none", int b = 0);
	port(const port &p);
	virtual ~port() { delete[] brand; };
	port &operator=(const port &p);
	port &operator+=(int b);
	port &operator--(int b);

	int BottleCount() const { return bottles; };
	virtual void show() const;
	friend ostream &operator<<(ostream &os, const port &p);
};

class vintageport : public port
{
private:
	char *nickname;
	int year;
public:
	vintageport(const char* br, int n, const char* nn, int y);
	vintageport(const vintageport &v);
	virtual ~vintageport() { delete[] nickname; };

	vintageport &operator=(const vintageport &v);
	virtual void show() const;
	friend ostream &operator<<(ostream &os, const vintageport &v);
};

