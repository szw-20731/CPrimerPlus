#pragma once
#include <iostream>
struct customer {
	char fullname[35];
	double payment;
};

class Stack
{
public:
	Stack();
	~Stack();
	void push(customer c);
	void pop();
private:
	int sum;
	int n;
	customer c[40];
};

