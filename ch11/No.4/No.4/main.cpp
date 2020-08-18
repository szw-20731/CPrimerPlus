#include <iostream>
#include "Time.h"

int main() {
	using std::cout;
	using std::cin;
	Time a(3, 35);
	Time b(2, 25);

	cout << "a + b = " << a + b;
	cout << "a - b = " << a + b;
	cout << "b * 2 = " << b * 2;
	cout << "2 * b = " << 2 * b;
	system("pause");
	return 0;
}