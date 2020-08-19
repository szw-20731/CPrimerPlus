#include <iostream>
#include "Stonewt.h"
using std::cout;
int main() {
	Stonewt a[6] = { Stonewt(14), Stonewt(15), Stonewt(16) };
	for (int i = 3; i < 6; i++) {
		std::cout << "Enter " << i << "th" << " pounds: ";
		double t;
		std::cin >> t;
		a[i] = Stonewt(t);
	}
	Stonewt max(DBL_MIN);
	Stonewt min(DBL_MAX);
	for (int i = 0; i < 6; i++) {
		if (a[i] >= Stonewt(11))
			cout << a[i];
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	cout << "Max = " << max;
	cout << "Min = " << min;
	system("pause");
	return 0;
}