#pragma once
#include <iostream>
using namespace std;

typedef int Item;

class List
{
private:
	enum{MAX = 2};
	int len;
	Item items[MAX];
public:
	List();
	~List();
	bool isfull();
	bool isempty();
	void add(Item a);
	void visit(void(*pf)(Item &));
	void show();
};

void f(Item &a);

