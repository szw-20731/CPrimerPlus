#include "Stack.h"

int main() {
	struct customer c1 = {"one", 10};
	struct customer c2 = { "two", 20 };
	struct customer c3 = { "three",30 };
	Stack a;
	a.push(c1);
	a.pop();
	a.push(c1);
	a.push(c2);
	a.push(c3);
	a.pop();
	a.pop();
	a.pop();
	system("pause");
	return 0;
}