#include "List.h"

int main() {

	List l;
	l.add(0);
	l.add(1);
	l.add(2);
	l.visit(f);
	l.show();
	system("pause");
	return 0;
}
