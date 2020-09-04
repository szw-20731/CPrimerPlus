#include <iostream>
using namespace std;
#include "Cd.h"

void Bravo(const Cd &disk) {
	disk.report();
}

int main()
{
	Cd c1("Beatles", "Capitol", 14, 35.5);
	Classic c2("Piano", "Alfred", "Philips", 2, 57.17);
	Cd *pcd = &c1;

	c1.report();
	c2.report();

	pcd->report();
	pcd = &c2;
	pcd->report();

	Bravo(c1);
	Bravo(c2);

	Classic copy;
	copy = c2;
	copy.report();
	system("pause");
	return 0;
}