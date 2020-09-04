#pragma once
#include <iostream>
class Cd
{
private:
	char *performance;
	char *label;
	int selections;
	double playtime;
public:
	Cd(char *s1, char *s2, int n, double x);
	Cd(const Cd &d);
	Cd();
	virtual ~Cd();
	virtual void report() const;
	Cd &operator=(const Cd &d);
};


class Classic : public Cd
{
private:
	char *product;
public:
	Classic(char *s3, char *s1, char *s2, int n, double x);
	Classic();
	virtual ~Classic();
	Classic(const Classic &d);
	virtual void report() const;
	Classic &operator=(const Classic &d);
};

