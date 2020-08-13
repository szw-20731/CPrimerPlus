#include "Plorg.h"

int main() {

	Plorg p;
	p.show();
	p.reset(80);
	p.show();
	Plorg q("SZW");
	q.show();
	q.reset(99);
	q.show();

	system("pause");
	return 0;
}