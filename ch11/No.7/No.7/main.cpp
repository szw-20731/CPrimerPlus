using namespace std;
#include "complex_.h"

int main()
{
	complex_ a(3, 4);
	complex_ c;
	cout << "Enter a complex number: " << endl;
	while (cin >> c)
	{
		cout << "c is " << c << endl;
		cout << "-a is" << -a << endl;
		cout << "a + c is" << a + c << endl;
		cout << "a - c is" << a - c << endl;
		cout << "a * c is" << a * c << endl;
		cout << "2 * c is" << 2 * c << endl;

		cout << "Enter a complex number: " << endl;
	}

	system("pause");
	return 0;
}