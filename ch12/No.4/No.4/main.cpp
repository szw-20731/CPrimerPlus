#include <iostream>
#include "stack.h"
int main()
{
	Item t;
	stack a(3);
	a.push(1);
	a.push(2);
	a.push(3);
	a.push(4);
	std::cout << a;
	stack b(a);
	b.pop(t);
	std::cout << t<< std::endl;
	std::cout << b;
	stack c = b;
	c.pop(t);
	std::cout << t << std::endl;
	std::cout << c;
	stack d = c;
	d.pop(t);
	std::cout << t << std::endl;
	std::cout << d;
	stack e = d;
	e.pop(t);
	std::cout << t << std::endl;
	std::cout << e;
	system("pause");
	return 0;
}