#include "Bank.h"



Bank::Bank()
{
	this->name_ = "";   //string 字符串不可以赋值为NULL;
	this->account_ = "";
	this->money_ = 0;
}

Bank::Bank(string name, string account, double money)
{
	this->name_ = name;
	this->account_ = account;
	this->money_ = money;
}


Bank::~Bank()
{
}

void Bank::take_money(double money)
{
	cout << "取出" << money << "元" << endl;
	this->money_ -= money;
	cout << "余额为" << this->money_ << "元" << endl;
}

void Bank::show()
{
	cout << this->name_ << " " << this-> account_ << " " << this->money_ << endl;
}

void Bank::save_money(double money)
{
	cout << "存入出" << money << "元" << endl;
	this->money_ += money;
	cout << "余额为" << this->money_ << "元" << endl;
}
