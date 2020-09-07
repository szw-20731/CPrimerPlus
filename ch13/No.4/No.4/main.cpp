#include "port.h"

int main()
{
	port *list[2];
	list[0] = new port("Brand", "ruby", 10);
	list[1] = new vintageport("VBrand", 10, "szw", 2020);
	list[0]->show();
	cout << *list[0] << endl;
	list[1]->show();
	cout << *list[1] << endl;
	list[0] = list[1];
	list[0]->show();
	system("pause");
	return 0;
}