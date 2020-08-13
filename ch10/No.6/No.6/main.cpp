#include "Move.h"

int main() {
	Move a(0, 0);
	Move b(1, 1);

	a.showmove();
	a.reset(2, 2);
	a.showmove();
	Move c(a.add(b));
	c.showmove();

	system("pause");
	return 0;
}