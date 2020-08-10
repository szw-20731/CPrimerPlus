#include "Person.h"



Person::Person()
{
	this->lname = "";    
	this->fname[0] = '\0';
}

Person::Person(const string & ln, const char * fn)
{
	this->lname = ln;
	strcpy_s(this->fname, fn);
}

void Person::Show() const
{
	/*
	for(auto x: fname)
		cout << x;
	cout << "(fname)."; 
	for (auto x : lname)
		cout << x;
	cout << "(lname)" << endl;
	*/
	cout << this->fname << "(fname)." << this->lname << "(lname)" << endl;

}


void Person::FormalShow() const
{	
	/*
	for (auto x : lname)
		cout << x;
	cout << "(lname).";
	for (auto x : fname)
		cout << x;
	cout << "(fname)" << endl;
	*/
	cout << this->lname << "(lname)." << this->fname << "(fname)" << endl;
}


Person::~Person()
{
}
