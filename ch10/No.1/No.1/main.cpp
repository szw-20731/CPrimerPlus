# include "Bank.h"

int main() {
	Bank a;
	a.show();
	a.save_money(100);
	a.take_money(50);
	a.show();

	Bank b("szw", "937378309", 1000);
	b.show();
	b.take_money(1000);
	b.show();
	system("pause");

}