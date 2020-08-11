#pragma once

#include <iostream>
namespace SALES
{
	class Sale
	{
	public:
		Sale();
		Sale(const double s[]);
		~Sale();
		void show_sales();
	private:
		double sales[4];
		double average;
		double max;
		double min;
	};
	void setSales(Sale &s);
	void showSales(Sale &s);
}

