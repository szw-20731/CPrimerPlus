#pragma once

#include <iostream>
#include <string>
#include <algorithm>  
using namespace std;

class Person
{
public:
	Person();
	Person(const string &ln, const char *fn = "default");
	void Show() const; //fname lname
	void FormalShow() const; //lname fname
	~Person();
private:
	static const int LIMIT = 25;
	string lname;
	char fname[LIMIT];
};

