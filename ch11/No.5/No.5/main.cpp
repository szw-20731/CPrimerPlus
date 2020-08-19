#include <iostream>
#include "Stonewt.h"
using std::cout;
int main() {
	Stonewt a(16);
	Stonewt b(1, 1);
	Stonewt c = a + b;
	cout << c;
	c = a - b;
	c.DoublePds_mode();
	cout << c;
	c = a * 2.1;
	c.DoublePds_mode();
	cout << c;
	c = 2.1 * a;
	c.IntPds_mode();
	cout << c;
	system("pause");
	return 0;
}