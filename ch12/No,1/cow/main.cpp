#include "cow.h"

int main()
{
	char nm1[10] = "cow1";
	char nm2[15] = "cow2";
	char ho[4] = "123";

	cow c3;
	c3.show();
	cow c2(nm2, ho, 80);
	cow t(nm1, ho, 60);
	cow c1(t);
	c1.show();
	c2.show();
	c1 = c2;
	c1.show();

	system("pause");
	return 0;
}