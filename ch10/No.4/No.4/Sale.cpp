#include "Sale.h"


namespace SALES {
	Sale::Sale()
	{
	}

	Sale::Sale(const double s[])
	{
		double sum = 0;
		this->max = s[0];
		this->min = s[0];
		for (int i = 0; i < 4; i++) {
			this->sales[i] = s[i];
			if (this->max < sales[i])
				this->max = sales[i];
			if (this->min > sales[i])
				this->min = sales[i];
			sum += sales[i];
		}
		this->average = sum / 4;
	}


	Sale::~Sale()
	{
	}

	void Sale::show_sales()
	{
		std::cout << this->average << "," << this->max << "," << this->min << std::endl;
	}
	void setSales(Sale & s)
	{
		double ss[4];
		std::cout << "Input four numbers:" << std::endl;
		for (int i = 0; i < 4; i++)
			std::cin >> ss[i];
		Sale temp(ss);
		s = temp;
	}
	void showSales(Sale & s)
	{
		s.show_sales();
	}
}
