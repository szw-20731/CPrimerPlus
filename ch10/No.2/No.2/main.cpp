#include "Person.h"

int main()
{
	Person one;
	one.Show();
	one.FormalShow();
	cout << endl;
	Person two("Two");
	two.Show();
	two.FormalShow();
	cout << endl;
	Person three("Three", "three");
	three.Show();
	three.FormalShow();
	cout << endl;
	system("pause");
}