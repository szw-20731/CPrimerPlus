#pragma once

#include <iostream>
#include <string>
using namespace std;
class Bank
{
public:
	Bank();
	Bank(string name, string account, double money);
	~Bank();
	void take_money(double money);
	void show();
	void save_money(double money);
private:
	string name_;
	string account_;
	double money_;


};

