#pragma once
#include <iostream>
class Cd
{
private:
	char performance[50];
	char label[20];
	int selections;
	double playtime;
public:
	Cd(char *s1, char *s2, int n, double x);
	// Cd(const Cd &d);
	Cd();
	virtual ~Cd();
	virtual void report() const;
	// Cd &operator=(const Cd &d);
};


class Classic : public Cd
{
private:
	char product[50];
public:
	Classic(char *s3, char *s1, char *s2, int n, double x);
	Classic();
	virtual void report() const;
};

