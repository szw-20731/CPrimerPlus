#include "Sale.h"
using SALES::Sale;
using SALES::setSales;
using SALES::showSales;
int main() {
	double t[4] = { 1, 2, 3, 4 };
	Sale a(t);
	showSales(a);
	setSales(a);
	showSales(a);
	system("pause");
	return 0;
}