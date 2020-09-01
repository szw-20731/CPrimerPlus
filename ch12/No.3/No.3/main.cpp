#include <iostream>
#include "stock.h"

const int STKS = 4;

int main() {
	stock stocks[STKS] = {
	stock("NanoSmart", 12, 20.0),
	stock("Boffo Objects", 200, 2.0),
	stock("Monolithic Obelisks", 130, 3.25),
	stock("Fleep Enterprises", 60, 6.5)
	};
	std::cout << "Stock holdings:\n";
	int st;
	for (st = 0; st < STKS; st++) {
		std::cout << stocks[st];
	}
	const stock *top = &stocks[0];
	for (st = 1; st < STKS; st++)
		top = &top->topval(stocks[st]);
	std::cout << "\nMost valuable holding:\n";
	std::cout << *top;
	system("pause");
	return 0;
}