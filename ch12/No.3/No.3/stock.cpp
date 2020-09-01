#include "stock.h"



stock::stock()
{
}

stock::stock(const char * co, long n, double pr)
{
	shares = n;
	share_val = pr;
	int len = std::strlen(co);
	company = new char[len + 1];
	strcpy_s(company, len + 1, co);
	set_tot();
}


stock::~stock()
{
	delete[] company;
}

void stock::buy(long num, double price)
{
	if (num < 0) {
		std::cout << "Error ! num < 0." << std::endl;
	}
	else if (num > shares) {
		std::cout << "Error! Here is no specified number of shares." << std::endl;
	}
	else {
		shares += num;
		share_val = price;
		set_tot();
	}
}

void stock::sell(long num, double price)
{
	if (num < 0) {
		std::cout << "Error ! num < 0." << std::endl;
	}
	else if (num > shares) {
		std::cout << "Error! Here is no specified number of shares." << std::endl;
	}
	else {
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void stock::update(double price)
{
	share_val = price;
	set_tot();
}

const stock & stock::topval(const stock & s) const
{
	if (s.total_val > total_val)
		return s;
	else
		return *this;
}

std::ostream &operator<<(std::ostream &os, const stock &s)
{
	os << "Company: " << s.company << ", shares: " << s.shares << ", share_val: " << s.share_val << ", total_val: " << s.total_val << ".\n";
	return os;
}
